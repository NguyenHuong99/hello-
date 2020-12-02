USE AdventureWorks2019 -- S? d?ng co s? d? li?u AdventureWorks

SELECT  * FROM HumanResources.Employee
--Khai b�o bi?n
Go 
DECLARE @deptID INT --Khai b�o bi?n c?c b? t�n l� deptID ki?u int
SELECT @deptID=1     --G�n gi� tr? cho bi?n b?ng 1
SELECT Name, GroupName FROM HumanResources.Department WHERE DepartmentID = @deptID
GO

SELECT @@LANGUAGE   --Hi?n th? th�ng tin c?a bi?n to�n c?c @@LANGUAGE, tr? l?i th�ng tin ng�n ng? s? d?ng trong sql server
SELECT @@VERSION    --Hi?n th? th�ng tin c?a bi?n to�n c?c @@VERSION, tr? l?i th�ng tin v? phi�n b?n sql server
SELECT @@IDENTITY

GO

--L?y t?ng t?t c? gi� tr? c�c b?n ghi tru?ng StadardCost thu?c b?ng ProductCostHistory
SELECT SUM(StandardCost) FROM Production.ProductCostHistory

--T�nh gi� tr? trung b�nh c?a tru?ng StadardCost thu?c b?ng ProductCostHistory
SELECT AVG(StandardCost) FROM Production.ProductCostHistory

--L?y ra gi� tr? l?n nh?t c?a tru?ng StadardCost b?ng ProductCostHistory
SELECT MAX(StandardCost) FROM Production.ProductCostHistory

--�?m t?ng s? b?n ghi trong b?ng ProductPhoto
SELECT COUNT(*) FROM Production.ProductPhoto
SELECT * FROM Production.ProductPhoto

--L?y ra ng�y gi? h? th?ng:
SELECT GETDATE()

--L?y ra gi? h? th?ng
SELECT DATEPART(hh,GETDATE())

--�?nh d?ng ng�y d�ng h�m CONVERT
SELECT CONVERT(VarChar(50), GETDATE(), 103)

--L?y ra d?nh danh c?a co s? d? li?u
SELECT DB_ID('AdventureWorks2019')

--T?o co s? d? li?u:
CREATE DATABASE EXAMPLE3

USE EXAMPLE3

--T?o b?ng trong co s? d? li?u 
CREATE TABLE Contacts
(MailID VARCHAR(20),
Name NTEXT,
TelephoneNumber INT)

--Th�m 1 c?t v�o b?ng d� c�:
ALTER TABLE Contacts ADD Address NVARCHAR(50)

--Th�m d? li?u v�o Contacts:
INSERT INTO Contacts values ('abc@yahoo.com',N'Nguy?n Van A',9898998,N'H� N?i')
INSERT INTO Contacts values ('nguyenthiB@yahoo.com', N'Nguy?n Th? B',4329234,N'H� N?i')
INSERT INTO Contacts values ('tranvanC@yahoo.com', N'Tr?n Van C',905243524,N'H� N?i')
INSERT INTO Contacts values ('trinhvanD@yahoo.com', N'Tr?nh Van D',4563576,N'H� N?i')

--L?y ra t?t c? b?n ghi trong b?n:
SELECT * FROM Contacts

--X�a b?n ghi c� maiID=tranvanC@yahoo.com
DELETE FROM Contacts WHERE MailID='tranvanC@yahoo.com'

--S?a b?n ghi c� maiID=trinhvanD@yahoo.com
UPDATE Contacts SET Name=N'Tr?nh Ho�ng Long' WHERE MailID='trinhvanD@yahoo.com'

--T?o login account d? test GRANT
CREATE LOGIN example3 WITH PASSWORD='123456'

--T?o user t? login account v?a t?o
CREATE USER example3 FROM LOGIN example3

--H?y b? t?t c? c�c quy?n c?a user example3 tr�n b?ng Contacts
REVOKE ALL ON Contacts FROM example3
--Disconnect v� connect l?i v?i user example3/123456, th?c hi?n c�u l?nh select d? demo cho sinh vi�n th?y user kh�ng c�n b?t k?

--G�n quy?n SELECT cho example3 tr�n b?ng Contacts
GRANT SELECT ON Contacts TO example3