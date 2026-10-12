# C++ CSV Reader

A console-based C++ application that reads student records from a CSV file, processes the data using object-oriented programming, and displays student information along with the average grade.

## Features

- Read student records from a CSV file
- Display student IDs, names, grades, and majors
- Process records containing extra whitespace and missing values
- Calculate the average grade of loaded students
- Organize data using C++ classes

## Technologies

- C++
- Standard Template Library (STL)
- File I/O
- Object-Oriented Programming (OOP)
- Microsoft Visual Studio

## Example Input

```csv
id,name,grade,major
1,John Doe,85.5,Computer Science
2,Jane Smith,90,Mathematics
3,Ali Ahmad,72.25,Physics
```

## Example Output

```text
ID: 1
Name: John Doe
Grade: 85.5
Major: Computer Science
------------------------
ID: 2
Name: Jane Smith
Grade: 90
Major: Mathematics
------------------------
```

The application also calculates and displays the average grade of the loaded student records.

## Screenshots

### CSV Input

![CSV Input](https://github.com/user-attachments/assets/e349acd9-aeec-4cfe-b7cc-58aa84c3cbe5)

### Console Output

![Console Output](PASTE_SECOND_IMAGE_URL_HERE)

### Average Grade

![Average Grade](PASTE_THIRD_IMAGE_URL_HERE)

## Running the Project

1. Clone or download the repository.
2. Open the project in Microsoft Visual Studio.
3. Build the project.
4. Ensure `students.csv` is available at the path expected by the application.
5. Run the application and view the results in the console.

## Learning Outcomes

This project provided practical experience with:

- Reading and processing files in C++
- Using classes to organize program functionality
- Working with CSV-formatted data
- Handling different input formats
- Performing calculations on loaded records
