/***
 *
 * Project name: Plant
 * File: Human.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_HUMAN_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_HUMAN_H

#include <string>
#pragma once

using namespace std;

/// abstract class Human
class Human{
private:
	string name;
	string surname;
	int age;
public:
	Human(string _name, string _surname, int _age);

	void setName(string _name);
	void setSurname(string _surname);
	void setAge(int _age);

	string getName();
	string getSurname();
	int getAge();
};


#endif //CPP_PROJECT_ANDRIIDEM_PLANT_HUMAN_H
