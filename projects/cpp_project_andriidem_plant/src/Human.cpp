/***
 *
 * Project name: Plant
 * File: Human.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "../headers/Human.h"

Human::Human(string _name, string _surname, int _age) {
	setName(_name);
	setSurname(_surname);
	setAge(_age);
}

void Human::setName(string _name) { name = _name; }
void Human::setSurname(string _surname) { surname = _surname; }
void Human::setAge(int _age) { age = _age; }

string Human::getName() { return name; }
string Human::getSurname() { return surname; }
int Human::getAge() { return age; }
