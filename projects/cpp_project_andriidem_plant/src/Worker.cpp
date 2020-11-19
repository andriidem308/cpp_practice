/***
 *
 * Project name: Plant
 * File: Worker.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#include "../headers/Worker.h"
#include <utility>



// initializing co-worker
Worker::Worker(string _worker_name, string _worker_surname, int _worker_age, int _experience)
:Human(std::move(_worker_name), std::move(_worker_surname), _worker_age){
	setExperience( _experience);
}

void Worker::setExperience(int _experience) {experience = _experience;}
unsigned long long Worker::getExperience() { return experience;}

double Worker::calcSalary() {
	return 0;
}



