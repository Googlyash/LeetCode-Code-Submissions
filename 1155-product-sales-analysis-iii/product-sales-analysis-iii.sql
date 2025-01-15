# Jan'15, 2025 10:32 pm

select a.product_id, year as first_year, quantity, price from Sales a
where (product_id, year) in
(
    select product_id, min(year) from Sales
    group by 1
);

# 8 min