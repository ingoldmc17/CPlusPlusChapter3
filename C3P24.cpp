// Chapter 3, Programming Challenge 24
// C3P24.cpp
// Matt Ingold
// 2/8/2017

// A program that plays a word game with the user

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strName, strAge, strCity, strCollege, strProfession, strAnimal, strPetName;

	cout << "Welcome to the program. We will ask you some questions and tell you a story." << endl;
	
	cout << "What is your name? ";
	getline(cin, strName);

	cout << "What is your age? ";
	getline(cin, strAge);

	cout << "How about the name of a city that you've lived in? ";
	getline(cin, strCity);

	cout << "And the name of a college? ";
	getline(cin, strCollege);

	cout << "What is your dream job? ";
	getline(cin, strProfession);

	cout << "A type of animal? ";
	getline(cin, strAnimal);

	cout << "And finally, what name to call that animal? ";
	getline(cin, strPetName);

	cout << "\n\n\n\nThere once was a person named " << strName << " who lived in " << strCity
		<< ". At the age of " << strAge << ", " << strName << " went to college at " << strCollege
		<< ". " << strName << " graduated and went to work as a " << strProfession << ". Then, "
		<< strName << " adopted a(n) " << strAnimal << " named " << strPetName << ". They both "
		<< "lived happily ever after!";

	return 0;
}