# Write your MySQL query statement below
select visited_on, amount, round(amount/7,2) as average_amount
from (select visited_on, sum(sum(amount)) over w as amount
      from customer
      group by visited_on
      window w as (
          order by visited_on
          range between interval 6 day preceding and current row
      )) X
where visited_on >= date_add((select min(visited_on) from customer),
                    interval 6 day)
order by visited_on;