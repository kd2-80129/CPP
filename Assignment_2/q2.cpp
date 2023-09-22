#include <iostream>
#include <string.h>

using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        building = "Morya tower";
        street = "shaniwar peth";
        city = "karad";
        pin = 415110;
    }
    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }
    void accept()
    {
        cout << "Enter the Address: " << endl;
        cout << "Building:";
        cin >> this->building;
        cout << "Street: ";
        cin >> this->street;
        cout << "City: ";
        cin >> this->city;
        cout << "Pin: ";
        cin >> this->pin;
    }
    void display()
    {
        cout << "Your Address is: " << this->building << "," << this->street << "," << this->city << "," << pin << endl;
    }
    string get_building()
    {
        return this->building;
    }
    string get_street()
    {
        return this->street;
    }
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }
    void set_building(string building)
    {
        this->building = building;
    }
    void set_street(string street)
    {
        this->street = street;
    }
    void set_city(string city)
    {
        this->city = city;
    }
    void set_pin(int pin)
    {
        this->pin = pin;
    }
};

int main()
{
    Address a1;
    
    string building = a1.get_building();
    cout << "Your Building is: " << building << endl;

    string street = a1.get_street();
    cout << "Your Street is: " << street << endl;

    string city = a1.get_city();
    cout << "Your City is: " << city << endl;

    int pin = a1.get_pin();
    cout << "Your Pin is: " << pin << endl;

    a1.set_building("Sector");

    a1.set_street("D-block");

    a1.set_city("Greater Noida");

    a1.set_pin(201310);

    a1.display();

    a1.accept();

    a1.display();

    Address a2("Sunbeam","Shaniwar peth","karad",415110);

    a2.display();
    
    return 0;
}