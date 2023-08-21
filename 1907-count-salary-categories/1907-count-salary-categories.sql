# Write your MySQL query statement below
SELECT
    c.category
    , COUNT(a.income) AS accounts_count
FROM
    (
        SELECT 'Low Salary' AS category
        UNION ALL
        SELECT 'Average Salary' AS category
        UNION ALL
        SELECT 'High Salary' AS category
    ) c
LEFT JOIN
    accounts a ON (
        (c.category = 'Low Salary' AND a.income < 20000) OR
        (c.category = 'Average Salary' AND a.income >= 20000 AND a.income <= 50000) OR
        (c.category = 'High Salary' AND a.income > 50000)
    )
GROUP BY
    c.category