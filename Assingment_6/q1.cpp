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
};

class employee
{
private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee() : id(0), sal(0), dept(""), doj(0, 0, 0) {}
    employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void accept()
    {
        cout << "Enter the Id: ";
        cin >> this->id;
        cout << "Enter the Salary: ";
        cin >> this->sal;
        cout << "Enter the Depatment: ";
        cin >> this->dept;
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
        cout << "\nThe details of the employee are: " << endl;
        cout << "The Id is : " << this->id << endl;
        cout << "The Salary is : " << this->sal << endl;
        cout << "The Department is : " << this->dept << endl;
        cout << "The Date of joining is : ";
        this->doj.display();
        cout << endl;
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
        cout << "\nThe details of the Person are: " << endl;
        cout << "The Name is : " << this->name << endl;
        cout << "The Address is : " << this->addr << endl;
        cout << "The Date of birth is : ";
        this->dob.display();
        cout << endl;
    }
};

int main()
{
    employee e1;
    e1.accept();
    // e1.display();
    // getting The details of employee//using getters
    int id;
    float sal;
    string dept;
    date doj;
    id = e1.get_id();
    sal = e1.get_sal();
    dept = e1.get_dept();
    doj = e1.get_doj();

    cout << "\nThe details of the employee are: " << endl;
    cout << "The Id is : " << id << endl;
    cout << "The Salary is : " << sal << endl;
    cout << "The Department is : " << dept << endl;
    cout << "The Date of joining is : ";
    doj.display();
    cout << endl;

    // Setting values for the Employee class;
    cout << "Enter the id to set as: ";
    cin >> id;
    e1.set_id(id);
    cout << "Enter the Salary to set as: ";
    cin >> sal;
    e1.set_sal(sal);
    cout << "Enter the Department to set as: ";
    cin >> dept;
    e1.set_dept(dept);
    cout << "Enter the Date of joining to set as: " << endl;
    doj.accept();
    e1.set_doj(doj);

    e1.display();

    //using person class
    person p;
    p.accept();

    string name, addr;
    date dob;

    name = p.get_name();
    addr = p.get_addr();
    dob = p.get_dob();

    cout << "\nThe details of the Person are: " << endl;
    cout << "The Name is : " << name << endl;
    cout << "The Address is : " << addr << endl;
    cout << "The Date of birth is : ";
    dob.display();
    cout << endl;

    cout << "Enter the Name to set as: ";
    cin >> name;
    p.set_name(name);
    cout << "Enter the Address to set as: ";
    cin >> addr;
    p.set_addr(addr);
    cout << "Enter the Date of Birth as: " << endl;
    dob.accept();
    p.set_dob(dob);

    p.display();

    return 0;
}