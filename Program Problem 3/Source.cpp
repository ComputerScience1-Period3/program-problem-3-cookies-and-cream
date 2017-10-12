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
	int x; 
	int i;
	for (int i = 0; i < 30; i++) {
		cout << "Enter a three digit number : " << endl;
		cin >> x;
		int A, B, C;

		A = x / 100;

		B = (x / 10) % 10;

		C = x % 10;

		if ((A < B) && (B < C)) { // check to see if ascending
			cout << "The number is ascending" << endl;
		}
		else if ((A > B) && (B > C)) { // check to see if descending
			cout << "The number is descending" << endl;
		}
		else if ((A = B) && (B = C)) { //check to see if neither
			cout << "The number is neither ascending nor descending" << endl;
		}

		pause(); // pauses to see the displayed text
	}
	}
