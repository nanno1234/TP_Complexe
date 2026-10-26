#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex z1(3, 4);
    Complex z2(1, 2);

    cout << "z1 = ";
    z1.afficher();

    cout << "z2 = ";
    z2.afficher();

    cout << "\nAddition :" << endl;
    (z1 + z2).afficher();
    (z1 + 2.0).afficher();

    cout << "\nSoustraction :" << endl;
    (z1 - z2).afficher();
    (z1 - 2.0).afficher();

    cout << "\nMultiplication :" << endl;
    (z1 * z2).afficher();
    (z1 * 2.0).afficher();

    cout << "\nDivision :" << endl;
    (z1 / z2).afficher();
    (z1 / 2.0).afficher();

    cout << "\nComparaison ==" << endl;
    cout << (z1 == z2) << endl;
    cout << (z1 == 3.0) << endl;

    cout << "\nComparaison <" << endl;
    cout << (z1 < z2) << endl;
    cout << (z1 < 2.0) << endl;

    cout << "\nComparaison >" << endl;
    cout << (z1 > z2) << endl;
    cout << (z1 > 2.0) << endl;

    cout << "\nComparaison !=" << endl;
    cout << (z1 != z2) << endl;
    cout << (z1 != 3.0) << endl;

    return 0;
}