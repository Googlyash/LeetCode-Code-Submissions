# Jan'14, 2025 10:25 pm

# Write your MySQL query statement below

select sell_date, count(DISTINCT product) as num_sold, GROUP_CONCAT(DISTINCT product ORDER BY product SEPARATOR ',') as products from Activities
group by 1
order by sell_date, product ; 

# 5 min
# Comments