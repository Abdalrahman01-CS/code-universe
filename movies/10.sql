SELECT DISTINCT name
FROM people
JOIN directors ON directors.person_id = people.id
JOIN movie ON movies.id = directors.movie_id
JOIN ratings ON ratings.movie_id = movies.id
WHERE rating >= 9.0;
