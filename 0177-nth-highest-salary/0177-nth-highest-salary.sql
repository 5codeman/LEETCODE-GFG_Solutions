CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
     SET N=N-1;
  RETURN (
      SELECT DISTINCT(salary) FROM Employee order by salary desc
      LIMIT 1 OFFSET N
      
  );
END