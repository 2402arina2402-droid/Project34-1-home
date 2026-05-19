#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Parrot : public Pet {
private:
	bool CanTalk;
public:
	Parrot(string name, int age, bool CanTalk) : Pet(name, age) {
		this->CanTalk = CanTalk;
	}
	void Sound() override {
		cout << "Tweet tweet!" << endl;
	}
	void Show() override {
		Pet::Show();
		cout << "Can talk: ";
		if (CanTalk == true) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	void Type() override {

		cout << "Parrot" << endl;
	}
};