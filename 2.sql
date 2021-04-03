SELECT TOP 3   Name,Country,City,COUNT(*)AS CH
FROM champions

GROUP BY Name,Country,City
ORDER BY CH DESC