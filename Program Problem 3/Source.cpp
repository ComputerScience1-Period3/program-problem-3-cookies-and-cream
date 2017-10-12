/*
Grace Walzel - 10/5/17 P3
Program Problem 3
Create a project assuming that a completely trusthrowrthy and perfect user comes along and will enter a 3 digit number into your program as you ask for it.
*/

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //gives access to _kbhit() and _getch() for pause()

//namespaces
using namespace std; //*

					 //functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// main
void main() {
	for (int i = 0; i < 30; i++) {
		int someThreeDigitNumber;
	cout << "Enter a three digit number : ";
	cin >> someThreeDigitNumber;
	int A, B, C;


	
	{

		A = someThreeDigitNumber / 100;

		B = (someThreeDigitNumber / 10) % 10; // make the names of the variables more accurate.

		C = someThreeDigitNumber % 10;

		if (A < B && B < C) { // check to see if ascending

			cout << someThreeDigitNumber << " is ascending" << endl;
		}
		else if (A > B && B > C) { // check to see if descending

			cout << someThreeDigitNumber << " is descending" << endl;
		}
		else { //check to see if neither 

			cout << someThreeDigitNumber << " The number is neither ascending nor descending" << endl;
		}
	}


	pause(); // pauses to see the displayed text
}
}
