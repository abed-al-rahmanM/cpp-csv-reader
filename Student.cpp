#include "Student.h"
#include <iostream>

Student::Student()
{
	id = 0;
	name = "Unknown";
	grade = 0.0;
	major = "Unknown";
}

void Student::setId(int id)
{
	if (id < 0)
	{
		this->id = 0;
		return;
	}
	this->id = id;
}

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setGrade(double grade)
{
	if (grade < 0.0)
	{
		this->grade = 0.0;
		return;
	}
	this->grade = grade;
}

void Student::setMajor(std::string major)
{
	this->major = major;
}

int Student::getId() const
{
	return id;
}

std::string Student::getName() const
{
	return name;
}

double Student::getGrade() const
{
	return grade;
}

std::string Student::getMajor() const
{
	return major;
}

void Student::print() 
{
	std::cout << "ID: " << id << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Grade: " << grade << "\n";
	std::cout << "Major: " << major << "\n";
	std::cout << "----------------------\n";
}