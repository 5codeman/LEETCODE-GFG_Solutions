# Write your MySQL query statement below
select e1.name as Employee 
from Employee as e1 join Employee as e2 #self join?
where e1.managerid = e2.id and e1.salary > e2.salary;