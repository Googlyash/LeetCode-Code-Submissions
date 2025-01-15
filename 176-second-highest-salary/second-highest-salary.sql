# Jan'15, 2025 06:24 pm

WITH TABL AS
    (
        SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rank_desc FROM Employee
    )
SELECT MAX(salary) AS SecondHighestSalary
FROM TABL
WHERE rank_desc=2;

# Comments
# 14 min

# Simple Soln.
    -- select max(salary) as SecondHighestSalary from Employee
    -- where salary<
    -- (
    --     select max(salary) from Employee
    -- );