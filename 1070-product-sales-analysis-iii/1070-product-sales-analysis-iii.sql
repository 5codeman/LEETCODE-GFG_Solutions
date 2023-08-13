# Write your MySQL query statement below
#First Solution

WITH CTE AS
(
    SELECT 
        product_id,
        MIN(year) AS first_year
    FROM Sales
    GROUP BY 1
)
SELECT 
    product_id,
    year AS first_year,
    quantity,
    price
FROM Sales 
WHERE (product_id, year) in (select * from CTE)