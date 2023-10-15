# C++ Library Management System

![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)

The C++ Library Management System is a console-based application that allows you to manage information about books and students in a library. This README will guide you through running the program on your local computer and provide an overview of its functionality.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Menu Structure](#menu-structure)
- [License](#license)

## Features

- **Student Management:** Add, delete, and display information about students, including their ID, name, roll number, and the number of books they have issued.

- **Book Management:** Add, delete, and display information about books, including their ID, name, author, ISBN, price, pages, and details about who issued them and when they were issued and should be returned.

- **Library Functions:** Issue a book to a student, return a book to the library, and view a list of books that have been issued.

## Getting Started

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/yourusername/contact-management-system.git
   ```

2. **Compile the Code:**

   Use a C++ compiler to compile the code. For example, using g++:

   ```bash
   g++ main.cpp -o library
   ```

3. **Run the Program:**

   ```bash
   ./library
   ```

## Usage

1. **Main Menu:**

   - Choose from the following options:
     - Student Management
     - Book Management
     - Library Functions
     - Exit

2. **Student Management:**

   - Add a new student to the database.
   - Delete an existing student from the database.
   - Display information about all students.

3. **Book Management:**

   - Add a new book to the library.
   - Delete an existing book from the library.
   - Display information about a particular book.
   - Display information about all books.
   - Sort books in ascending order of their IDs.
   - Sort books in descending order of their IDs.

4. **Library Functions:**

   - Issue a book to a student.
   - Return a book to the library.
   - View a list of books that have been issued.

## Menu Structure

The program uses a structured menu system to help you navigate through the different functions. You can choose options from the main menu and its sub-menus for students, books, and library functions.

## License

This C++ Library Management System is open-source and is available under the [MIT License](LICENSE). Feel free to use, modify, and contribute to this project.