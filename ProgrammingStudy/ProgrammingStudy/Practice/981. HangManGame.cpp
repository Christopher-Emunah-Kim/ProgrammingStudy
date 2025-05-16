#include <string>
#include <iostream>

using namespace std;


//int main()
//{
//	string list[] = { "apple", "banana", "orange", "grape", "kiwi", "christmas"};
//	int ran = rand() % list->size(); // Random number between 0 and 5
//	string Goal = list[ran]; // Randomly select a word from the list
//	
//	string Guess(Goal.length(), '_'); // Initialize Guess with underscores
//
//	cout << "Welcome to Hangman!" << endl;
//	cout << "The word is: " << Guess << endl;
//	char guess;
//	
//	while (true)
//	{
//		cout << "Enter the letter you want to guess: ";
//		cin >> guess;
//
//		// Check if the guessed letter is in the word
//		if (Goal.find(guess) != string::npos)
//		{
//			cout << "Correct Guess!" << endl;
//			// Update the Guess string with the correct letter
//			for (int i = 0; i < Goal.length(); i++)
//			{
//				if (Goal[i] == guess)
//				{
//					Guess[i] = guess;
//				}
//			}
//		}
//		else
//		{
//			cout << "Wrong Guess!" << endl;
//		}
//
//		if (Goal == Guess)
//		{
//			cout << "Congratulations! You've guessed the word: " << Goal << endl;
//			break;
//		}
//	}
//	
//
//    return 0;
//}