//Guess the number by Royyale Clay

//Iclude the libraries 
#include <iostream>
#include <ctime>


//use the standard namespace
using namespace std;

void main()
{
	//Seed the random number
	srand(time(NULL));

	//Declare the variables
	int Secret_Number = rand() % 100 + 1;
	int Guess = 0;

	while (Guess != Secret_Number)
	{
		//This code repeats until the condition is no longer true


		//If the guess is too high tell the user
		if (Guess > Secret_Number)
		{
			cout << "Your guess is too high" << endl;

		}

		if (Guess < Secret_Number)
		{
			cout << "Your guess is too low" << endl;

		}



		//Get the user's guess
		cout << "Guess the secret number." << endl;
		cin >> Guess;
		//if the user guesses the right number congratulate him!
		if (Guess == Secret_Number)
		{
			cout << "Good Job! You guesses the secret  number!" << endl;

		}
	}
	system("PAUSE");
}