/***
 *
 * Project name: Plant
 * File: Product.h
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#ifndef CPP_PROJECT_ANDRIIDEM_PLANT_PRODUCT_H
#define CPP_PROJECT_ANDRIIDEM_PLANT_PRODUCT_H

#include <string>
#pragma once

using namespace std;


/// class Product which makes employee
class Product
{
	// some fields which could be useful
private:
	string product_name;
	int number_of_products;
	double price_of_product;
public:
	Product(string _product_name, int _number_of_products, double _price_of_product);

	void setProductName(string _product_name);
	void setNumberOfProducts(int _number_of_products);
	void setPriceOfProduct(double _price_of_product);

	string getProductName();
	int getNumberOfProducts();
	double getPriceOfProduct();

	double FullOfProduction(); // function which calculate a price_of_equipment
};

#endif //CPP_PROJECT_ANDRIIDEM_PLANT_PRODUCT_H
