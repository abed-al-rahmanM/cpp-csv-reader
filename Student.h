#pragma once

#include <string>

class Student
{
private:
	int id;
	std::string name;
	double grade;
	std::string major;

public:
	// constructo
	Student();

	// setters
	void setId(int id);
	void setName(std::string name);
	void setGrade(double grade);
	void setMajor(std::string major);

	// getters
	int getId() const;
	std::string getName() const;
	double getGrade() const;
	std::string getMajor() const;

	void print();
};

