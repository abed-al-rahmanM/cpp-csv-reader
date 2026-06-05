#include <iostream>
#include <fstream>
#include "CSVReader.h"


using namespace std;

int main()
{ 
	std::vector<Student> students = CSVReader::readCSV("students.csv");

    // Check if anything was loaded
    if (students.empty())
    {
        std::cout << "No students loaded. Check the CSV file path.\n";
        return 1;
    }

    std::cout << "Loaded " << students.size() << " books.\n\n";

    for (Student& s : students)
    {
        s.print();
    }

    double avg = CSVReader::averageGrade(students);
    std::cout << "The average of the students grades: " << avg << std::endl;

}