#include <iostream>
using std::cout;
using std::cin;

int main() {
    int firstNumber;
    int secondNumber;
    bool keepGoing = true;
    int answer;

    while(keepGoing)
    {
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". Enter a second number: ";
        cin >> secondNumber;

        if (firstNumber > secondNumber) 
        {
            cout << "The first number is greater";
        }
        if (firstNumber == secondNumber)
        {
            cout << "The numbers are equal";
        }
        if (firstNumber < secondNumber)
        {
            cout << "The second number is greater";   
        }

        for (int i = 0; i < 10; i++) 
        {
            cout << i << " ";
        }
        cout << '\n';
        cout << "Compare another pair? 0 = stop, any other number = yes: ";
        cin >> answer;
        if (answer == 0)
        {
            keepGoing = false;
        }
    }
}