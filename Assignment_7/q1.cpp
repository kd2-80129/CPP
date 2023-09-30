#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year) : day(day), month(month), year(year) {}
    int get_day()
    {
        return this->day;
    }
    int get_month()
    {
        return this->month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    void display()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
    }
    void accept()
    {
        cout << "Enter the day: ";
        cin >> this->day;
        cout << "Enter the month: ";
        cin >> this->month;
        cout << "Enter the year: ";
        cin >> this->year;
    }
    void isleapyear(){
        if((year%4 == 0 && year%100 != 0) || year%400 == 0)
            cout<<"Leap Year! "<<endl;
        else
            cout<<"Not a Leap Year!"<<endl;
    }
};

class person
{
private:
    string name;
    string addr;
    date dob;

public:
    person() : name(name), addr(addr), dob(0, 0, 0) {}
    person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->addr = addr;
    }
    void accept()
    {
        cout << "Enter the Name: ";
        cin >> this->name;
        cout << "Enter the Address: ";
        cin >> this->addr;
        cout << "Enter the date of birth: " << endl;
        this->dob.accept();
    }
    string get_name()
    {
        return this->name;
    }
    string get_addr()
    {
        return this->addr;
    }
    date get_dob()
    {
        return this->dob;
        ;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }
    void set_dob(date dob)
    {
        this->dob = dob;
    }
    void display()
    {
        cout << "The Name is : " << this->name << endl;
        cout << "The Address is : " << this->addr << endl;
        cout << "The Date of birth is : ";
        this->dob.display();
    }
};

class employee : public person
{
private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee() : id(0), sal(0), dept(""), doj(0, 0, 0), person("", "", 0, 0, 0) {}
    employee(int id, float sal, string dept, string name, string addr, int day, int month, int year,int day_j,int month_j,int year_j) : doj(day, month, year), person(name, addr, day_j, month_j, year_j)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void accept()
    {
        person::accept();
        cout << "Enter the Id: ";
        cin >> this->id;
        cout << "Enter the Salary: ";
        cin >> this->sal;
        cout << "Enter the Depatment: ";
        cin >> this->dept;
        cout << "Enter the Date of Joining" << endl;
        this->doj.accept();
    }
    int get_id()
    {
        return this->id;
    }
    float get_sal()
    {
        return this->id;
    }
    string get_dept()
    {
        return this->dept;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }
    date get_doj()
    {
        return this->doj;
    }
    void set_doj(date doj)
    {
        this->doj = doj;
        ;
    }
    void display()
    {
        cout << "The Id is : " << this->id << endl;
        person::display();
        cout << "The Salary is : " << this->sal << endl;
        cout << "The Department is : " << this->dept << endl;
        cout << "The Date of joining is : ";
        this->doj.display();
        cout << endl;
    }
};

int main()
{
    date d;
    cout << "Enter the date: " << endl;
    d.accept();
    cout << "\nThe date is : ";
    d.display();
    cout << endl;

    person p;
    cout << "Enter the details for the Person: " << endl;
    p.accept();
    cout << "\nThe details for the Person are : " << endl;
    p.display();
    cout << endl;

    employee e;
    cout << "Enter the details for the Employee: " << endl;
    e.accept();
    cout << "\nThe details for the Emoloyee are : " << endl;
    e.display();

    return 0;
}