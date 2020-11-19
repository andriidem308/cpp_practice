/***
 *
 * Project name: Plant
 * File: Worker.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_COWORKER_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_COWORKER_H

#include "../src/Human.cpp"
#pragma once

/// class Co-worker who puts his salary on deposit
class Worker : public Human
{
	// some fields which could be useful
private:
	int experience;
public:
	// range of functions
	Worker(string _worker_name, string _worker_surname, int _worker_age, int _experience);

	virtual double calcSalary();

	void setExperience(int _experience);
	unsigned long long getExperience();

};


#endif //CPP_PROJECT_ANDRIIDEM_PLANT_COWORKER_H
