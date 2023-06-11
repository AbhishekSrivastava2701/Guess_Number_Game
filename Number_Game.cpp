#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int randomNumber, guess;
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    cout << "Guess the number between 1 and 100: ";
    cin >> guess;
    while (guess != randomNumber) 
    {
        (guess < randomNumber)?cout << "Too low Guess. Guess again: ":cout << "Too high Guess. Guess again: ";
        cin >> guess;
    }
    cout << "Congratulations! You guessed the number.\n";
    return 0;
}
