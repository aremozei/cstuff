#include <iostream>
using std::cout;

double add(double x, double y)
{
    return x + y;
}

int main() 
{
    int total = add(3,4);
    cout << "3 + 4 is " << total << '\n';

    double another = add(1.2, 3.4);
    //when doubles are converted to ints, there are no integers, decimals get thrown away
    cout << '\n';
    cout << " 1.2 + 3.4 is " << another;
    cout << '\n';
    return 0;
}
