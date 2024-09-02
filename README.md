Student Database Management System (SDB)

Project Description

The Student Database Management System (SDB) is a simple C-based application designed to manage student records using a fixed-size database. The system allows users to add, delete, read, and list student information, making it a lightweight and efficient tool for managing small-scale student data. The project is built using static memory allocation. 

Features

- Add Student Records: Add new student entries with information such as Student ID, academic year, and grades for three courses.
- Delete Student Records: Remove student data by specifying the student’s ID.
- Read Student Records: Retrieve and display a student’s data using their unique ID.
- Check Database Capacity: Determine if the database has reached its maximum capacity of 10 students.
- List Student IDs: Display all current student IDs in the database.
- Check Record Existence: Verify if a student record exists in the database based on the ID.

Technical Details

- Programming Language: C
- Memory Allocation: Static, with a maximum capacity of 10 student records.
- Modular Design: The project is divided into multiple files, including header files for type definitions and function declarations, and source files for implementation.
- Data Structure: Uses an array of structures (`student`) to store and manage student data.

Usage

The SDB system offers a menu-driven interface allowing users to perform various operations on the database:

1. Add a new student entry.
2. Get the current number of student records.
3. Read a specific student's data using their ID.
4. List all student IDs in the database.
5. Check if a student ID exists.
6. Delete a student record by ID.
7. Check if the database is full.
8. Exit the application.

Getting Started

To run the project, compile the source files and execute the main application. The program will prompt you to select operations from the menu and guide you through managing the student records.
