# Write your MySQL query statement below
select 
project_id,
round(sum(e.experience_years) / count(e.experience_years),2) as average_years
from Project p
join Employee e on p.employee_id = e.employee_id
group by project_id