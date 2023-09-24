#include <iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int totalCars;
    double totalCash;
    int nonPayingCars;
    int payingCars;

public:
    tollbooth()
    {
        this->totalCars = 0;
        this->totalCash = 0;
        this->nonPayingCars = 0;
        this->payingCars = 0;
    }
    void payingCar()
    {
        totalCars++;
        totalCash += 0.5;
        payingCars++;
    }
    void nopayCar()
    {
        totalCars++;
        nonPayingCars++;
    }
    int get_nonPayingCars()
    {
        return this->nonPayingCars;
    }
    int get_PayingCars()
    {
        return this->payingCars;
    }
    double get_totalCash()
    {
        return this->totalCash;
    }
    void printOnconsole()
    {
        cout << "The total number of cars passed through the tollbooth are: " << totalCars << endl;
        cout << "The total toll collected is: " << totalCash << endl;
        cout << "The total number of cars that paid toll at the tollbooth are: " << payingCars << endl;
        cout << "The total number of cars that did not paid toll at the tollbooth are: " << nonPayingCars << endl;
    }
};

int main()
{
    int ch;
    tollbooth t1;

    t1.nopayCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.nopayCar();
    t1.nopayCar();
    t1.nopayCar();

    do
    {
        cout << "********************************************************" << endl;
        cout << "Your Choices are....." << endl;
        cout << "1)View all the data" << endl
             << "2)View only Total number of paying cars" << endl
             << "3)View only Total number of non paying cars" << endl
             << "4)View only Total Toll" << endl
             << "Enter 0 to exit" << endl;
        cout << "";
        cout << "*********************************************************" << endl;
        cout << "Enter your Choice: ";
        cin >> ch;
        cout << "*********************************************************" << endl;
        switch (ch)
        {
        case 0:
            cout << "Exiting." << endl;
            break;
        case 1:
            t1.printOnconsole();
            break;
        case 2:
            int ans;
            ans = t1.get_PayingCars();
            cout<<"Total Paying Cars are : "<<ans<<endl;
            break;
        case 3:
            int ans1;
            ans1 = t1.get_nonPayingCars();
            cout<<"Total Non Paying Cars are : "<<ans1<<endl;
            break;
        case 4:
            double ans2;
            ans2 = t1.get_totalCash();
            cout<<"Total Toll collected is : "<<ans2<<endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }while (ch);
    return 0;
}
