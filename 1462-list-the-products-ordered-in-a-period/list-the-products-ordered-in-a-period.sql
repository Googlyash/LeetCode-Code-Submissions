# Jan'14, 2025 10:19 pm

# Write your MySQL query statement below
select product_name, SUM(unit) as unit from Products a join Orders b USING(product_id)
WHERE LEFT(order_date, 7)= '2020-02'
GROUP BY product_id
HAVING SUM(unit)>=100;

# 5 min