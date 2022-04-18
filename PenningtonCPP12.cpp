//Micah Pennington
//January 24 2022 ©
//Chapter 3 Program

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	/* -- Define variables to use -- */

	//DieRoll holds the random number generated as the dice roll
	int DieRoll;
	//Guess holds the user's inputed guess
	int Guess;
	//TODO: Implemented in chap 5
	int cnt1;
	//TODO: Implemented in chap 5
	int cnt2;

	//Set the seed for random numbers
	srand((unsigned int)time(NULL));

	/* -- Input -- */

	//Ask the user for input
	cout << "Please enter a guess between 1 and 6: ";

	//Get the input and put it in the Guess variable
	cin >> Guess;
	cout << '\n';

	//Make sure the user input the correct data
	if (Guess >= 1 && Guess <= 6) {

		//Generate the random number between 1 and 6
		DieRoll = rand() % 6 + 1;


		/* -- Output -- */

		//Display the user's guess
		cout << "Your guess: " << Guess << '\n';

		//Display the number rolled
		cout << "The number rolled: " << DieRoll << '\n';

		//if the numbers are the same display "WINNER"
		if (Guess == DieRoll) { cout << "WINNER\n"; }

		//if the number is odd display "DOUBLE WINNER"
		if (DieRoll % 2 == 1) { cout << "DOUBLE WINNER\n"; }

		//if the number is even and the sum of guess and die roll is even display "YOU ARE A LUCKY PERSON"
		if (DieRoll % 2 == 0 && Guess + DieRoll >= 10) { cout << "YOU ARE A LUCKY PERSON\n"; }
	}
	else { cout << "Incorrect input"; }
	
	return 1;
}