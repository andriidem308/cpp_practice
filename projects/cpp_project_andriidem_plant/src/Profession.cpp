/***
 *
 * Project name: Plant
 * File: Profession.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "../headers/Profession.h"

Profession::Profession(string _profession_name, double _profession_rate) {
	setProfessionName(_profession_name);
	setRate(_profession_rate);
}

void Profession::setProfessionName(string _profession_name) {profession_name = _profession_name;}
void Profession::setRate(double _profession_rate) {rate = _profession_rate;}

string Profession::getProfessionName() { return profession_name;}
double Profession::getRate() { return rate;}

