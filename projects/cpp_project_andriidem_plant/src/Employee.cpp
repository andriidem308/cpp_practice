/***
 *
 * Project name: Plant
 * File: Employee.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "../headers/Employee.h"


Employee::Employee(string _employee_name, string _employee_surname, int _employee_age,
		int _experience, Product *_product, Profession *_profession, vector<Equipment*> _equipments) :
		Worker(std::move(_employee_name), std::move(_employee_surname), _employee_age, _experience) {
	product = _product;
	profession = _profession;
	equipments = _equipments;
}

void Employee::addEquipment(Equipment *_equipment) { equipments.push_back(_equipment);}

double Employee::calcSalary() {
	double calculatedSalary = 0.1 * profession->getRate() * getExperience() + product->FullOfProduction() * 0.05;
	return calculatedSalary;
}


