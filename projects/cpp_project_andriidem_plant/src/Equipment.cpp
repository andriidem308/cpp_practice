/***
 *
 * Project name: Plant
 * File: Equipment.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "../headers/Equipment.h"


// setting equipment
Equipment::Equipment(string _equipment_name, int _equipments_number, double _equipment_price){
	setEquipmentName(_equipment_name);
	setEquipmentsNumber(_equipments_number);
	setEquipmentPrice(_equipment_price);
}

void Equipment::setEquipmentName(string _equipment_name) {equipment_name = _equipment_name; }
void Equipment::setEquipmentsNumber(int _equipments_number) {equipments_number = _equipments_number; }
void Equipment::setEquipmentPrice(double _equipment_price) {equipment_price = _equipment_price;}

string Equipment::getEquipmentName() {return equipment_name;}
int Equipment::getEquipmentNumber() {return equipments_number;}
double Equipment::getEquipmentPrice() {return equipment_price;}



