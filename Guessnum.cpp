#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    
    srand(time(0)); 

    
    int number_to_guess = rand() % 100 + 1; 
    int guess = 0;

    cout << " Guess the random number between 1 and 100." << endl;
    

    
    while (guess != number_to_guess) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < number_to_guess) {
            cout << "Entered number is smaller! Try again." << endl;
        } else if (guess > number_to_guess) {
            cout << "Entered number is bigger! Try again." << endl;
        } else {
            cout << "Congratulations! for correct guess." << endl;
        }
    }

    return 0;
}

