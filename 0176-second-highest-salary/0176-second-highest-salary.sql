# Write your MySQL query statement below

select 
case when count(t1.salary) < 2 then NULL 
else min(t1.salary) end as SecondHighestSalary
from (select distinct salary
from employee
order by salary desc 
limit 2) as t1