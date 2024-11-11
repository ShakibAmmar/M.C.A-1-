
DELETE FROM PARTICIPATED;
DELETE FROM OWNS;
DELETE FROM ACCIDENT;
DELETE FROM CAR;
DELETE FROM PERSON;

CREATE TABLE PERSON 
(
driver_id : VARCHAR(100) PRIMARY KEY ,
name:VARCHAR(100) , 
address:VARCHAR(100) 
);

CREATE TABLE CAR
(
regno:VARCHAR(100) PRIMARY KEY, 
model:VARCHAR(100) , 
year:int 
);

CREATE TABLE ACCIDENT
(
report_number:int PRIMARY KEY, 
accd_date:date , 
location:VARCHAR(100) 
);

CREATE TABLE OWNS
(
driver_id:VARCHAR(100) FOREIGN KEY, 
regno:VARCHAR(100) 
);

CREATE TABLE PARTICIPATED 
(
driver_id:VARCHAR(100), 
regno:VARCHAR(100), 
report_number:int ,
damage_amount:int
);

Desc PERSON

-- Inserting tuples into PERSON table
INSERT INTO PERSON (driver_id, name, address) VALUES 
('D001', 'John Doe', '123 Elm St'),
('D002', 'Jane Smith', '456 Oak St'),
('D003', 'Alice Johnson', '789 Pine St'),
('D004', 'Bob Brown', '321 Maple St'),
('D005', 'Charlie Davis', '654 Cedar St');

-- Inserting tuples into CAR table
INSERT INTO CAR (regno, model, year) VALUES 
('REG001', 'Toyota Camry', 2005),
('REG002', 'Honda Accord', 2008),
('REG003', 'Ford Focus', 2007),
('REG004', 'Chevrolet Malibu', 2008),
('REG005', 'Nissan Altima', 2006);

-- Inserting tuples into ACCIDENT table
INSERT INTO ACCIDENT (report_number, accd_date, location) VALUES 
(11, '2008-05-12', 'Main St'),
(12, '2008-06-15', 'Second St'),
(13, '2008-07-20', 'Third St'),
(14, '2008-08-25', 'Fourth St'),
(15, '2008-09-30', 'Fifth St');

-- Inserting tuples into OWNS table
INSERT INTO OWNS (driver_id, regno) VALUES 
('D001', 'REG001'),
('D002', 'REG002'),
('D003', 'REG003'),
('D004', 'REG004'),
('D005', 'REG005');

-- Inserting tuples into PARTICIPATED table
INSERT INTO PARTICIPATED (driver_id, regno, report_number, damage_amount) VALUES 
('D001', 'REG001', 11, 15000),
('D002', 'REG002', 12, 20000),
('D003', 'REG003', 13, 18000),
('D004', 'REG004', 14, 22000),
('D005', 'REG005', 15, 17000);

-- Update the damage amount for the car with specific regno in the accident with report number 12
UPDATE PARTICIPATED 
SET damage_amount = 25000 
WHERE regno = 'REG002' AND report_number = 12;

-- Add a new accident to the database
INSERT INTO ACCIDENT (report_number, accd_date, location) VALUES 
(16, '2008-10-05', 'Sixth St');

-- Find the total number of people who owned cars that were involved in accidents in the year 2008
SELECT COUNT(DISTINCT O. ) AS total_owners
FROM OWNS O
JOIN PARTICIPATED P ON O.regno = P.regno
JOIN ACCIDENT A ON P.report_number = A.report_number
WHERE YEAR(A.accd_date) = 2008;

-- Find the number of accidents in which cars belonging to a specific model were involved
SELECT COUNT(DISTINCT P.report_number) AS total_accidents
FROM PARTICIPATED P
JOIN CAR C ON P.regno = C.regno
WHERE C.model = 'Honda Accord';
