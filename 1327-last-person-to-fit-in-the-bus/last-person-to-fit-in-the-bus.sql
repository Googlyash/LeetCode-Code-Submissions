# Jan'1, 2025 06:06 pm

select a.person_name 
from Queue a 
join Queue b on a.turn>=b.turn
group by a.person_id, a.person_name
having sum(b.weight)<=1000
order by sum(b.weight) desc
limit 1;

# 7 min
# Comments