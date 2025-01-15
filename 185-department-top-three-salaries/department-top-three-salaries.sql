# Jan'15, 2025 06:35 pm

with tabl as
    (
        select a.id, 
            dense_rank() over(partition by b.name order by salary desc ) as ranks
        from Employee a join Department b on a.DepartmentId= b.id
    )
select b.name as Department, 
        a.name as Employee, 
        salary as Salary 
from Employee a join Department b on a.DepartmentId= b.id join tabl c on a.id= c.id
where ranks<4;

# 10 min