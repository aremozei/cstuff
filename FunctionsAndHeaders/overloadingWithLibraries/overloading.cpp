// in cpp, overloading reffers to :
//  function names not always have to be unique, as long as the compiler can tell the functions apart
//  you can have two functions with the same name
// functions can have same name as long as the compiler can tell them apart 
// one way to make this is to have different number of arguments to separate them
// it's not allowed to separate them by their return value
// and taking the same number of arguments but having different types is risky
#include <iostream>
using std::cout;

double add(double a, double b, double c);
double add(double x, double y);
bool test(bool x);
bool test(double x);

int main() 
{
    int total = add(3,4);
    cout << "3 + 4 is " << total << '\n';

    double another = add(1.2, 3.4);
    //when doubles are converted to ints, there are no integers, decimals get thrown away
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
    // if(test(3))
    // {
    //     cout << "3.2 passes the test" << '\n';
    // } in this scenario, the compiler takes abiguous int as either double or bool, so it doesn;t like it
    // the 3 ahs to be converted to either bool or double
    //or create a new overloaded add fn for the int values
    return 0;
}
//NOta para el futuro yo
//VS code no es lo mejor para desarrollar c++ en linux. Me va a causar problemas a futuro con librerias custom
//buscar alternativa
//por ahora, crear un make init proj de c++ con CTRL + SHIT + P y la extensiond emaker
//y cambiar en el archivo el src de los archivosq ue quiero linkear
//F