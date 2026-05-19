#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"
using namespace std;

int main() {

	Dog dog("Buddy", 3, "Golden Retriever");
	Cat cat("Whiskers", 2, "Black");
	Parrot parrot("Polly", 5, true);
	Hamster hamster("Bobby", 1, "Seeds");

	dog.Type();
	dog.Show();
	dog.Sound();

	cout << endl;

	cat.Type();
	cat.Show();
	cat.Sound();

	cout << endl;

	parrot.Type();
	parrot.Show();
	parrot.Sound();

	cout << endl;

	hamster.Type();
	hamster.Show();
	hamster.Sound();
}