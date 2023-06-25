# Write your MySQL query statement below
SELECT email as Email 
FROM (
    SELECT 
        email, count(id) as cnt
    FROM Person
    GROUP BY email
    HAVING cnt > 1
) AS a