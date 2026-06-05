	#include "CSVReader.h"
	#include <fstream>
	#include <sstream>
	#include <iostream>

	std::string CSVReader::trim(std::string& s)
	{
		size_t start = s.find_first_not_of(" \t\r");
		if (start == std::string::npos)  // check if the string contains whitespaces or is empty
		{								// npos i.e characters = 0 or not
			return "";
		}

		size_t last = s.find_last_not_of(" \t\r");
		return s.substr(start, last - start + 1);
	}

	std::vector<Student> CSVReader::readCSV(const std::string& fileName)
	{
		std::vector<Student> students;
		std::ifstream infile(fileName);
		if (!infile)
		{
			std::cout << "Error could not open the file: " << fileName << std::endl;
			return students;
		}


		std::string line;

		if (!getline(infile, line))
		{
			std::cout << "File is empty.\n";
			return students;
		}

		while (getline(infile, line))
		{
			line = trim(line);
			if (line.empty()) continue;

			std::stringstream ss(line);
			std::string token;
		

			Student s;
			// id
			getline(ss, token, ',');
			token = trim(token);

			try
			{
				s.setId(std::stoi(token));
			}
			catch (...)
			{
				continue;
			}

			// name
			getline(ss, token, ',');
			token = trim(token);
			s.setName(token);

			// grade
			getline(ss, token, ',');
			token = trim(token);

			try
			{
				s.setGrade(std::stod(token));
			}
			catch (...)
			{
				continue;
			}

			// major
			getline(ss, token, ',');
			token = trim(token);
			s.setMajor(token);
		
			students.push_back(s);
		}
		return students;	
	}

	double CSVReader::averageGrade(const std::vector<Student>& students)
	{
		if (students.empty())
		{
			return 0.0;
		}

		double total = 0.0;
		for (const Student& s : students)
		{
			total += s.getGrade();
		}
		return total / students.size();
	}
