# Write your MySQL query statement below
SELECT name, bonus
FROM Employee LEFT JOIN Bonus USING(empId)
WHERE COALESCE(bonus, 0) < 1000; 