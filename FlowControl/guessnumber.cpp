#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;

int main() 
{
    int secretNum = rand() % 10 + 1;
    //since I didn't set the seed, it will always be 4, or whatever it gets the firs
    //time it runs 
    int playerGuess;
    bool haveGuessed = false;

    while(!haveGuessed)
    {
        cout << "Enter your guess: ";
        cin >> playerGuess;

        if(playerGuess == secretNum)
        {
            cout << "Ding ding ding! Correct!" << '\n';
            haveGuessed = true;
        } else 
        {
            cout << "Sad trumpet noises, you are wrong" << '\n';
        }
    }
}