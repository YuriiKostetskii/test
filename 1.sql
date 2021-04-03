use champ

SELECT Name, Country, City, Competition, Score
FROM 
  ( SELECT *,
           ROW_NUMBER() OVER (PARTITION BY Competition
                              ORDER BY Score DESC
                             )
             AS rowNum
    FROM champions
  ) temp 
WHERE rowNum <= 3
ORDER BY Competition;
