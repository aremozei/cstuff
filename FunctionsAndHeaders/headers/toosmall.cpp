#include <iostream>
#include <functions.h>
using std::cout;

int main() 
{
    int total = add(3,4);
    cout << "3 + 4 is " << total << '\n';

    double another = add(1.2, 3.4);
    cout << '\n';
    cout << " 1.2 + 3.4 is " << another;
    cout << '\n';

    double totalofthree = add(1.1, 2.2, 3.3);
    cout << '\n';
    cout << " 1.1, 2.2, 3.3 total is " << totalofthree;
    cout << '\n';

    // or
    // // add(0,0,0);

    if(test(true)) 
    {
        cout << "true passes the test" << '\n';
    }
    if(test(3.2))
    {
        cout << "3.2 passes the test" << '\n';
    }
    return 0;
}
//see esto de vscode y c++ no es lo mejor en la vida
//nah man, mejor aprendo a hacer make files
