#include "./menu.h"
#include<iostream>
using namespace std;

Emenu menu()
{
    int ch;
    cout << "********************************************************" << endl;
    cout << "Your Choices are....." << endl;
    cout << "1)View the Initial Volume of the Cylinder" << endl
         << "2)View the radius" << endl
         << "3)View the height" << endl
         << "4)Calculate the volume" << endl
         << "5)Set the radius" << endl
         << "6)Set the height" << endl
         << "Enter 0 to exit" << endl;
    cout << "";
    cout << "*********************************************************" << endl;
    cout << "Enter your Choice: ";
    cin >> ch;
    cout << "*********************************************************" << endl;
    return Emenu(ch);
}