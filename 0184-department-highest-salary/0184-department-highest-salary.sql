# Write your MySQL query statement below
# Write your MySQL query statement below
select t2.name as Department, t1.name as Employee , t1.salary as Salary
FROM
(select *,
DENSE_RANK() OVER(PARTITION BY DepartmentID ORDER BY salary DESC) as rnk
 from Employee
) t1
join Department t2 on t1.departmentId  = t2.id
where t1.rnk =1