/***
 *
 * Project name: Plant
 * File: Equipment.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_EQUIPMENT_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_EQUIPMENT_H

#include <string>
#pragma once

using namespace std;

class Equipment
{
private:
	string equipment_name;
	int equipments_number;
	double equipment_price;
public:
	Equipment(string _name, int _number, double _equip_price);
	void setEquipmentName(string _equipment_name);
	void setEquipmentsNumber(int _equipments_number);
	void setEquipmentPrice(double _equipment_price);

	string getEquipmentName();
	int getEquipmentNumber();
	double getEquipmentPrice();
};

#endif //CPP_PROJECT_ANDRIIDEM_PLANT_EQUIPMENT_H
