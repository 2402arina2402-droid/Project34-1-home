#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string name;
	int age;
public:
	Pet() {
		name = "No name";
		age = 0;
	}
	Pet(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void Show() {
		cout << "PET" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};