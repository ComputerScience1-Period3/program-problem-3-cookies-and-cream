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
	int someThreeDigitNumber;
	cout << "Enter a three digit number : ";
	cin >> someThreeDigitNumber; // This is where the three numbers are input by the user.
	int A, B, C;

	for (int i = 0; i < 30; i++) {

		A = someThreeDigitNumber / 100; // This is the first number.

		B = (someThreeDigitNumber / 10) % 10; // This is the second number.

		C = someThreeDigitNumber % 10; // This is the third number.

		if (A<B && B<C) { // check to see if ascending

			cout <<someThreeDigitNumber<<" is ascending. ";} // What is put out when the number is ascending.

		else if (A>B && B>C) { // check to see if descending

			cout <<someThreeDigitNumber<<" is descending. ";} // What is put out when the number is descending.

		else { //check to see if neither

			cout <<someThreeDigitNumber<<" is neither ascending nor descending. " << endl;}  // What is put out when the number is neither. 

		cout << "Enter a three digit number : ";
		cin >> someThreeDigitNumber; // This is where the three numbers are input by the user again.

	}
	pause(); // pauses to see the displayed text

}
