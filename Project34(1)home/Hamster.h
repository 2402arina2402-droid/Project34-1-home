#pragma once
#include "Pet.h"

class Hamster : public Pet {
private:
	string food;
public:
	Hamster(string name, int age, string food) : Pet(name, age) {
		this->food = food;
	}
	void Sound() override {
		cout << "Pi-pi!" << endl;
	}
	void Show() override {
		Pet::Show();
		cout << "Favorite food: " << food << endl;
	}
	void Type() override {
		cout << "Hamster" << endl;
	}
};