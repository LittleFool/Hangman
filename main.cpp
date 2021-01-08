#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
	string word = "hangman";
	string solution = "_______";
	int tries = 10;


	while (tries > 0 && solution != word) {
		char guess = '_';
		bool guessIsCorrect = false;
		
		cout << "Looking for the following word: " + solution + ", you have " + to_string(tries) + " tries left" << endl;
		cout << "Guess a character: ";
		cin >> guess;

		for (int i = 0; i < word.length(); i++) {
			guess = tolower(guess);

			if (word[i] == guess) {
				solution[i] = guess;
				guessIsCorrect = true;
			}
		}

		if (!guessIsCorrect) {
			tries--;
		}
	}

	cout << "You guess correctly! The word is " + word << endl;

	return 0;
}
