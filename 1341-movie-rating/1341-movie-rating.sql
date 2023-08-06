(Select u.name as results 
from MovieRating as m, Users as u 
where u.user_id = m.user_id Group By m.user_id 
Order by count(m.user_id) desc, u.name limit 1)
union all
(Select m.title as results
from MovieRating as r, Movies as m
where m.movie_id = r.movie_id 
and r.created_at like "2020-02-%"
Group By r.movie_id 
Order by avg(r.rating) desc, m.title limit 1);