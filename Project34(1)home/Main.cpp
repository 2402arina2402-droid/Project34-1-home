#include <iostream>
#include <string>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
using namespace std;

int main() {
	Dog dog("Buddy", 3, "Golden Retriever");
	Cat cat("Whiskers", 2, "Black");
	Parrot parrot("Polly", 5, true);

	dog.ShowDog();
	cout << endl;

	cat.ShowCat();
	cout << endl;

	parrot.ShowParrot();
	cout << endl;
}