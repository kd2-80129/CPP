#include "./Cylinder.h"
#include "./menu.h"

int main()
{
    Cylinder c1;
    Emenu ch;
    while((ch = menu()) != 0)
    {
        switch (ch)
        {
        case 0:
            cout << "Exiting.Good bye!!" << endl;
            break;
        case 1:
            c1.printVolume();
            break;

            break;
        case 2:
            double r;
            r = c1.getRadius();
            cout << "radius is : " << r << endl;
            break;
        case 3:
            double h;
            h = c1.getHeight();
            cout << "Height is : " << h << endl;
            break;
        case 4:
            double v;
            v = c1.getVolume();
            cout << "Volume is : " << v << endl;
            break;
        case 5:
            double r1;
            cout << "Set the Radius as : ";
            cin >> r1;
            c1.setRadius(r1);
            break;
        case 6:
            double h1;
            cout << "Set the Height as : ";
            cin >> h1;
            c1.setHeight(h1);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}