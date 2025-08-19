CREATE TABLE students (
    roll INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    department VARCHAR(100) NOT NULL
);

CREATE TABLE courses (
    c_id INT PRIMARY KEY,
    c_name VARCHAR(100) UNIQUE NOT NULL,
    year INT,
    term INT,
    credit INT
);

CREATE TABLE course_taken (
    roll INT,
    c_id INT,
    session VARCHAR(50),
    PRIMARY KEY (roll, c_id),
    FOREIGN KEY (roll) REFERENCES students(roll) ON DELETE CASCADE,
    FOREIGN KEY (c_id) REFERENCES courses(c_id) ON DELETE CASCADE
);

DESCRIBE students;
DESCRIBE courses;
DESCRIBE course_taken;

INSERT INTO students (roll, name, department) VALUES
(101, 'Alice', 'CSE'),
(102, 'Bob', 'EEE'),
(103, 'Charlie', 'CSE');

INSERT INTO courses (c_id, c_name, year, term, credit) VALUES
(1, 'Data Structures', 2025, 1, 3),
(2, 'Database Systems', 2025, 1, 3),
(3, 'Theory of Computation', 2025, 2, 3);

INSERT INTO course_taken (roll, c_id, session) VALUES
(101, 1, '2025-2026'),
(102, 2, '2025-2026'),
(103, 3, '2025-2026');

SELECT * FROM students;
SELECT * FROM courses;
SELECT * FROM course_taken;
