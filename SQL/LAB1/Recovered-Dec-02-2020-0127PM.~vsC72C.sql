USE AdventureWorks2019 -- S? d?ng co s? d? li?u AdventureWorks

SELECT  * FROM HumanResources.Employee
--Khai báo bi?n
Go 
DECLARE @deptID INT --Khai báo bi?n c?c b? tên là deptID ki?u int
SELECT @deptID=1     --Gán giá tr? cho bi?n b?ng 1
SELECT Name, GroupName FROM HumanResources.Department WHERE DepartmentID = @deptID
GO

SELECT @@LANGUAGE   --Hi?n th? thông tin c?a bi?n toàn c?c @@LANGUAGE, tr? l?i thông tin ngôn ng? s? d?ng trong sql server
SELECT @@VERSION    --Hi?n th? thông tin c?a bi?n toàn c?c @@VERSION, tr? l?i thông tin v? phiên b?n sql server
SELECT @@IDENTITY

GO

--L?y t?ng t?t c? giá tr? các b?n ghi tru?ng StadardCost thu?c b?ng ProductCostHistory
SELECT SUM(StandardCost) FROM Production.ProductCostHistory

--Tính giá tr? trung bình c?a tru?ng StadardCost thu?c b?ng ProductCostHistory
SELECT AVG(StandardCost) FROM Production.ProductCostHistory

--L?y ra giá tr? l?n nh?t c?a tru?ng StadardCost b?ng ProductCostHistory
SELECT MAX(StandardCost) FROM Production.ProductCostHistory

--Ð?m t?ng s? b?n ghi trong b?ng ProductPhoto
SELECT COUNT(*) FROM Production.ProductPhoto
SELECT * FROM Production.ProductPhoto

--L?y ra ngày gi? h? th?ng:
SELECT GETDATE()

--L?y ra gi? h? th?ng
SELECT DATEPART(hh,GETDATE())

--Ð?nh d?ng ngày dùng hàm CONVERT
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

--Thêm 1 c?t vào b?ng dã có:
ALTER TABLE Contacts ADD Address NVARCHAR(50)

--Thêm d? li?u vào Contacts:
INSERT INTO Contacts values ('abc@yahoo.com',N'Nguy?n Van A',9898998,N'Hà N?i')
INSERT INTO Contacts values ('nguyenthiB@yahoo.com', N'Nguy?n Th? B',4329234,N'Hà N?i')
INSERT INTO Contacts values ('tranvanC@yahoo.com', N'Tr?n Van C',905243524,N'Hà N?i')
INSERT INTO Contacts values ('trinhvanD@yahoo.com', N'Tr?nh Van D',4563576,N'Hà N?i')

--L?y ra t?t c? b?n ghi trong b?n:
SELECT * FROM Contacts

--Xóa b?n ghi có maiID=tranvanC@yahoo.com
DELETE FROM Contacts WHERE MailID='tranvanC@yahoo.com'

--S?a b?n ghi có maiID=trinhvanD@yahoo.com
UPDATE Contacts SET Name=N'Tr?nh Hoàng Long' WHERE MailID='trinhvanD@yahoo.com'

--T?o login account d? test GRANT
CREATE LOGIN example3 WITH PASSWORD='123456'

--T?o user t? login account v?a t?o
CREATE USER example3 FROM LOGIN example3

--H?y b? t?t c? các quy?n c?a user example3 trên b?ng Contacts
REVOKE ALL ON Contacts FROM example3
--Disconnect và connect l?i v?i user example3/123456, th?c hi?n câu l?nh select d? demo cho sinh viên th?y user không còn b?t k?

--Gán quy?n SELECT cho example3 trên b?ng Contacts
GRANT SELECT ON Contacts TO example3