CREATE OR ALTER PROCEDURE playerInsert
  (@Name nvarchar(20),
   @Country nvarchar(20),
   @City nvarchar(20),
   @Competition nvarchar(20),
   @Score int)
AS
BEGIN
   IF NOT EXISTS (SELECT * FROM champions
                   WHERE
                   Country = @Country
                   AND City = @City
				   AND Competition = @Competition)
   BEGIN
       INSERT INTO champions (Name, Country, City, Competition, Score)
       VALUES (@Name, @Country, @City, @Competition, @Score)
   END
END