/***
 *
 * Project name: Plant
 * File: Employer.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYER_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYER_H

#include "../src/Employee.cpp"
#include <vector>
#pragma once

/// class Employer, has vector of employers
class Employer: public Worker
{
	// "must have" fields for this class
private:
	vector<Employee*> employees;
public:
	Employer(string _name, string _surname, int _age, int _experience, vector<Employee*> _employees);
	double calcSalary();
	string showSalaries();

	void addEmployee(Employee *_newEmployee);
	// void removeEmployee(Employee *_someEmployee);

};


#endif //CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYER_H
