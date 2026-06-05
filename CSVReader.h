#pragma once

#include "Student.h"
#include <vector>

class CSVReader
{
private:
	static std::string trim(std::string& s);

public:
	static std::vector<Student> readCSV(const std::string& fileName);
	static double averageGrade(const std::vector<Student>& student);
};
