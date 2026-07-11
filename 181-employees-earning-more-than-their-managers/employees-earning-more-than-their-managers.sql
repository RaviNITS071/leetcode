# Write your MySQL query statement below
SELECT E1.name AS Employee  FROM Employee AS E1
WHERE managerId is NOT NULL
AND salary > (SELECT salary FROM Employee as E2 WHERE E2.id = E1.managerId);