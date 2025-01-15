# Jan'15, 2025 10:10 pm

(
    select name as results 
    from Users a join MovieRating b using(user_id)
    group by name
    order by count(*) DESC, name asc
    limit 1
)
UNION all
(
    select title as results 
    from Movies a join MovieRating b using(movie_id)
    where left(created_at, 7)= '2020-02'
    group by title
    order by avg(rating) desc, title
    limit 1
);

# 6 min
# Comments