-- Reset for no error
DROP TABLE IF EXISTS BORROWER;
DROP TABLE IF EXISTS LOAN;
DROP TABLE IF EXISTS CUSTOMER;
DROP TABLE IF EXISTS DEPOSITOR;
DROP TABLE IF EXISTS ACCOUNT;
DROP TABLE IF EXISTS BRANCH;

-- a) Create the tables
CREATE TABLE BRANCH (
    branch_name VARCHAR(255) PRIMARY KEY,
    branch_city VARCHAR(255),
    assets REAL
);

CREATE TABLE ACCOUNT (
    accno INT PRIMARY KEY,
    branch_name VARCHAR(255),
    balance REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name)
);

CREATE TABLE DEPOSITOR (
    customer_name VARCHAR(255),
    accno INT,
    PRIMARY KEY (customer_name, accno),
    FOREIGN KEY (accno) REFERENCES ACCOUNT(accno)
);

CREATE TABLE CUSTOMER (
    customer_name VARCHAR(255) PRIMARY KEY,
    customer_street VARCHAR(255),
    customer_city VARCHAR(255)
);

CREATE TABLE LOAN (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(255),
    amount REAL,
    FOREIGN KEY (branch_name) REFERENCES BRANCH(branch_name)
);

CREATE TABLE BORROWER (
    customer_name VARCHAR(255),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (loan_number) REFERENCES LOAN(loan_number)
);

-- b) Enter at least five tuples for each relation
INSERT INTO BRANCH (branch_name, branch_city, assets) VALUES
('Main Branch', 'New York', 1000000),
('West Branch', 'Los Angeles', 500000),
('East Branch', 'Chicago', 300000),
('North Branch', 'Seattle', 400000),
('South Branch', 'Miami', 200000);

INSERT INTO ACCOUNT (accno, branch_name, balance) VALUES
(1, 'Main Branch', 1500.00),
(2, 'Main Branch', 2500.00),
(3, 'West Branch', 3000.00),
(4, 'East Branch', 4000.00),
(5, 'North Branch', 5000.00);

INSERT INTO DEPOSITOR (customer_name, accno) VALUES
('Alice', 1),
('Bob', 2),
('Charlie', 3),
('David', 4),
('Eve', 5);

INSERT INTO CUSTOMER (customer_name, customer_street, customer_city) VALUES
('Alice', '123 Main St', 'New York'),
('Bob', '456 Elm St', 'Los Angeles'),
('Charlie', '789 Oak St', 'Chicago'),
('David', '101 Pine St', 'Seattle'),
('Eve', '202 Maple St', 'Miami');

INSERT INTO LOAN (loan_number, branch_name, amount) VALUES
(1, 'Main Branch', 10000.00),
(2, 'West Branch', 15000.00),
(3, 'East Branch', 20000.00),
(4, 'North Branch', 25000.00),
(5, 'South Branch', 30000.00);

INSERT INTO BORROWER (customer_name, loan_number) VALUES
('Alice', 1),
('Bob', 2),
('Charlie', 3),
('David', 4),
('Eve', 5);

-- c) Find all the customers who have at least two accounts at the main branch
SELECT customer_name
FROM DEPOSITOR
WHERE accno IN (SELECT accno FROM ACCOUNT WHERE branch_name = 'Main Branch')
GROUP BY customer_name
HAVING COUNT(accno) >= 2;

-- d) Find all the customers who have an account at all the branches located in a specific city
SELECT customer_name
FROM DEPOSITOR
WHERE accno IN (SELECT accno FROM ACCOUNT WHERE branch_name IN 
    (SELECT branch_name FROM BRANCH WHERE branch_city = 'New York'))
GROUP BY customer_name
HAVING COUNT(DISTINCT accno) = (SELECT COUNT(*) FROM BRANCH WHERE branch_city = 'New York');

-- e) Demonstrate how you delete all account tuples at every branch located in a specific city
DELETE FROM ACCOUNT
WHERE branch_name IN (SELECT branch_name FROM BRANCH WHERE branch_city = 'New York');
