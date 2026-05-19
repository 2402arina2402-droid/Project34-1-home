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
	void Sound() override {
		cout << "Meow!" << endl;
	}
	void Show() override {
		Pet::Show();
		cout << "Color: " << color << endl;
	}
	void Type() override {
		cout << "Cat" << endl;
	}
};