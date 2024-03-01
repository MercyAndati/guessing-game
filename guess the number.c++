#include <iostream>
#include <cstdlib>//generata random number using function rand()
#include <ctime>//generate random number according to the system clock uing the function srand(time(0))
using namespace std;

int main() {
    int highScore = 0; // Initialize high score
    cout << "\n\t\t\tWelcome to Guessing game (*~*)" << endl;
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the "
            "level you choose. Good Luck!" << endl;
    while (true) {
        int score = 0; // Initialize player's score for each game
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;

        // select the level of difficulty
        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        // generating the secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Difficulty Level: Easy
        if (difficultyChoice == 1) {
            cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {
                // prompting the player to guess the secret number.
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                // determining if the playerChoice matches the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout << "total score is: " << score << endl;
                    // Update high score if the current score is higher
                    highScore = max(highScore, score);
                    cout << "Your highest score so far: " << highScore << endl;
                    cout << "Play the game again with us!!\n\n" << endl;
                    break;
                } else {
                    cout << "Nope,  " << playerChoice << "  is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen" << endl;
                    } else {
                        cout << "The secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    // Calculate score based on attempts
                    score =(10 * (choicesLeft + 1));
                    cout << choicesLeft << " choices left." << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the secret number, it was "<< secretNumber << "\n, You lose!!\n\n";
                        cout << "Your score for this game: " << score << endl;
                        // Update high score if the current score is higher
                        highScore = max(highScore, score);
                        cout << "Your highest score so far: " << highScore << endl;
                        cout << "Play the game again to win!!!\n\n";
                    }
                }
            }
        }
       // Difficulty level : Medium
		else if (difficultyChoice == 2) {
			cout << "\nYou have 7 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {
				// prompting the player to guess the secret number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;
				// determining if the playerChoice matches the secret number
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "<< playerChoice << " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "total score is: " << score << endl;
                    // Update high score if the current score is higher
                    highScore = max(highScore, score);
                    cout << "Your highest score so far: " << highScore << endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is smaller than the number you have chosen"<< endl;
					}
					else {
						cout << "The secret number is greater than the number you have chosen"<< endl;
					}
					choicesLeft--;
                    // Calculate score based on attempts
                    score = (14 * (choicesLeft + 1));
					cout << choicesLeft << " choices left. "<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was "<< secretNumber<< "\n, You lose!!\n\n";
						cout << "Your score for this game: " << score << endl;
                        // Update high score if the current score is higher
                        highScore = max(highScore, score);
                        cout << "Your highest score so far: " << highScore << endl;
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}
		// Difficulty level : difficult
		else if (difficultyChoice == 3) {
			cout << "\nYou have 4 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 4;
			for (int i = 1; i <= 4; i++) {
				// prompting the player to guess the secret number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;
				// determining if the playerChoice matches the secret number
				if (playerChoice == secretNumber) {
					cout << "Well played! You won, "<< playerChoice<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."<< endl;
					cout << "total score is: " << score << endl;
                    // Update high score if the current score is higher
                    highScore = max(highScore, score);
                    cout << "Your highest score so far: " << highScore << endl;
					cout << "Play the game again with us!!\n\n"<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is smaller than the number you have chosen"<< endl;
					}
					else {
						cout << "The secret number is greater than the number you have chosen"<< endl;
					}
					choicesLeft--;
                    // Calculate score based on attempts
                    score =(20 * (choicesLeft + 1));
                    cout << choicesLeft << " choices left." << endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the secret number, it was "<< secretNumber<< "\n, You lose!!\n\n";
					   	cout << "Your score for this game: " << score << endl;
                        // Update high score if the current score is higher
                        highScore = max(highScore, score);
                        cout << "Your highest score so far: " << highScore << endl;
						cout << "Play the game again to win!!!\n\n";
					}
				}
			}
		}
        else if (difficultyChoice == 0) {
            exit(0);
        } else {
            cout << "Wrong choice, Enter a valid choice to play the game! (0, 1, 2, 3)" << endl;
        }
    }
    return 0;
}
