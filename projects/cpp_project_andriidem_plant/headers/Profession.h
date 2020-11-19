/***
 *
 * Project name: Plant
 * File: Profession.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_PROFESSION_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_PROFESSION_H

#include <string>
#pragma once

using namespace std;

/// class Profession
class Profession
{
	// some fields which could be useful
private:
	string profession_name;
	double rate;
public:
	// functions which could be useful
	Profession(string _profession_name, double _profession_rate);

	void setProfessionName(string _profession_name);
	void setRate(double _profession_rate);

	string getProfessionName();
	double getRate();

};


#endif //CPP_PROJECT_ANDRIIDEM_PLANT_PROFESSION_H
