#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Cat : public Pet {
private:
	string color;
public:
	Cat(string name, int age, string color) : Pet(name, age) {
		this->color = color;
	}
	void ShowCat() {
		cout << "CAT" << endl;
		Show();
		cout << "Color: " << color << endl;
	}
};