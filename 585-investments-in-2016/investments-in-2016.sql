# Jan'15, 2025 05:57 pm

# Write your MySQL query statement below
select round(sum(tiv_2016), 2) as tiv_2016
from
(
    select *,
        count(*) over(partition by tiv_2015) as cnt1,
        count(*) over(partition by lat, lon) as cnt2
    from Insurance
) as filtered
where cnt1>1 and cnt2=1;

# 10 min
# Comments


-- Simple One

    -- select round(sum(tiv_2016), 2) as tiv_2016 from Insurance
    -- where tiv_2015 in
    -- (
    --     select tiv_2015 from Insurance
    --     group by tiv_2015
    --     having count(*)>1
    -- )
    -- and (lat, lon) in
    -- (
    --     select lat, lon from Insurance
    --     group by lat, lon
    --     having count(*)=1
    -- );