# Write your MySQL query statement below
select customer_id
from customer c
group by customer_id
having count(distinct product_key)=(select count(distinct product_key) from product)