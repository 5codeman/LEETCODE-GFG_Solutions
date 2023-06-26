# Write your MySQL query statement below
SELECT t1.name as Customers
FROM Customers t1
LEFT JOIN Orders t2 
ON t1.id = t2.customerId
Where t2.customerId is null