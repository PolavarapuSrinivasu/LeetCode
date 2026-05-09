# Write your MySQL query statement below
SELECT name AS Customers
FROM Customers a
LEFT JOIN Orders o
ON a.id = o.customerId
WHERE o.customerId IS NULL;
