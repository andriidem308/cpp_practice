/***
 *
 * Project name: Plant
 * File: Employer.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#include "../headers/Employer.h"

Employer::Employer(string _name, string _surname, int _age, int _experience, vector<Employee *> _employees) :
		Worker(std::move(_name), std::move(_surname), _age, _experience) {
	employees = std::move(_employees);
}

double Employer::calcSalary() {
	double calculatedSalary =  getExperience() * 100 * employees.size();
	return calculatedSalary;
}

void Employer::addEmployee(Employee *_newEmployee) {
	employees.push_back(_newEmployee);
}

string Employer::showSalaries() {
	string _output = "";
	_output += " *** Employees' salaries of Employer " + getName() + " " + getSurname() + " ***\n";
	for (Employee* _employee : employees){
		double _salary = _employee->calcSalary();
		_output += "Employee's (" + _employee->getName() + " " + _employee->getSurname() + ") ";
		_output += "salary: " + to_string(_salary) + " USD\n";
	}

	return _output;
}



