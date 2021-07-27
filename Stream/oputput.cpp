#include <iostream>
using std::cout;

int main() 
{
    cout << "Hi" << '\n';
    cout << 34 << '\n';
    cout << 2 + 2 << '\n';
    cout << "Hi number " << 4 << '\n';
    cout << "Hi number " << 6.94 << '\n';
    cout << " " << 2 - 6 << '\n';
    cout << "Hellow " << " general Kenobi" << '\n';

    int i = 32;
    cout << i * 2 << '\n';
    cout << i - 2 << '\n';

    auto f = "Holis";
    cout << f << '\n';

    float z = 2.5;
    cout << z << '\n';

    z = 11 / 3.5;
    cout << z << '\n';

    int q = 2;
    int k = 1;
    cout << q << '\n';
    
    q = 4.9;
    k = 9/5;
    cout << q << " " << k <<'\n' ;
    //no redondea, se vuela los decimales si es entero
    //float no se vuela decimales

    //sin embargo, float tiene problemas representando dobles
    float p = 4.9;
    p = 9/5;
    cout << p << "\n";
    //lod e arriba no muestra 1.8, si no 1, ya que float no es tan preciso como double
    //y para esos valores se necesita double. aun no veo bien porque
    float x = 4.9;
    p = 9.0/5;
    cout << x << "\n";
    //poner 9.0 arregla el problema? ?????? bruh
}