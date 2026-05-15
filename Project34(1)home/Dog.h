#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Dog :public Pet {
private:
	string breed;
public:

	Dog(string name, int age, string breed) : Pet(name, age) {
		this->breed = breed;
	}
	void ShowDog() {
		cout << "DOG" << endl;
		Show();
		cout << "Breed: " << breed << endl;
	}
};