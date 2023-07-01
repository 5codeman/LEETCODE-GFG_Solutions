# Write your MySQL query statement below
SELECT t1.id
from weather t1
join weather t2 on t1.recordDate = date_add(t2.recordDate,interval 1 day)
where t1.temperature > t2.temperature