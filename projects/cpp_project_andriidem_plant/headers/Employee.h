/***
 *
 * Project name: Plant
 * File: Employee.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYEE_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYEE_H

#include "../src/Worker.cpp"
#include "../src/Equipment.cpp"
#include "../src/Product.cpp"
#include "../src/Profession.cpp"
#include <vector>
#pragma once

/// class Employee
class Employee: public Worker{
	// "must have" fields for this class
private:
	Product* product;  // price_of_equipment of production has already made
	Profession* profession;
	vector<Equipment*> equipments;  // assign equipment to employee
public:
	Employee(string _employee_name, string _employee_surname, int _employee_age,
			int _experience, Product *_product, Profession *_profession, vector<Equipment*> _equipments);

	//void show();

	void addEquipment(Equipment *_equipment);

	double calcSalary() override;
};


#endif //CPP_PROJECT_ANDRIIDEM_PLANT_EMPLOYEE_H
