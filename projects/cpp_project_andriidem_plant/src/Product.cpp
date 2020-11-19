/***
 *
 * Project name: Plant
 * File: Product.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/

#include "../headers/Product.h"


Product::Product(string _product_name, int _number_of_products, double _price_of_product) {
	setProductName(_product_name);
	setNumberOfProducts(_number_of_products);
	setPriceOfProduct(_price_of_product);
}

void Product::setProductName(string _product_name) { product_name = _product_name;}
void Product::setNumberOfProducts(int _number_of_products) { number_of_products = _number_of_products;}
void Product::setPriceOfProduct(double _price_of_product) {price_of_product =_price_of_product;}

string Product::getProductName() {return product_name;}
int Product::getNumberOfProducts() { return number_of_products;}
double Product::getPriceOfProduct() {return price_of_product;}

// whole price_of_equipment of product
double Product::FullOfProduction() { return number_of_products * price_of_product; }



