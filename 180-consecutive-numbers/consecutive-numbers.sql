# Jan'15, 2025 05:40 pm

# Write your MySQL query statement below

select num as ConsecutiveNums from Logs
where (id, num) in
(
    select id+1 as id, num from Logs
    where (id, num) in
    (
        select id+1 as id, num from Logs
    )
)
group by num;

# 3 min