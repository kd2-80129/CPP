#include <iostream>
using namespace std;

class employee
{
protected:
    int id;
    float sal;

public:
    employee() : id(0), sal(0) {}
    employee(int id, float sal) : id(id), sal(sal)
    {                                                           
    }
    int get_id()
    {
        return this->id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << "Enter the id: ";
        cin >> this->id;
        cout << "Enter the Salary: ";
        cin >> this->sal;
    }
    void display()
    {
        cout << "\nThe details are: " << endl;
        cout << "The id is: " << this->id << endl;
        cout << "The salary is: " << this->sal << endl;
    }
};

class manager : virtual public employee
{
protected:
    float bonus;
    void accept_manager()
    {
        cout << "Enter the bonus: ";
        cin >> this->bonus;
    }
    void dispaly_manager()
    {
        cout << "The bonus is: " << this->bonus<<endl;
    }

public:
    manager()
    {
        id = 0;
        sal = 0;
        this->bonus = 0;
    }
    manager(int id, float sal, float bonus)
    {
        employee::id = id;
        employee::sal = sal;
        this->bonus = bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the bonus: ";
        cin >> this->bonus;
    }
    void display()
    {
        employee::display();
        cout << "The bonus is: " << this->bonus<<endl;
    }
};

class salesman : virtual public employee
{
protected:
    float comm;
    void accept_salesman()
    {
        cout << "Enter the commission: ";
        cin >> this->comm;
        cout << endl;
    }
    void display_salesman()
    {
        cout << "The commission is: " << this->comm << endl;
    }

public:
    salesman()
    {
        employee::id = 0;
        employee::sal = 0;
        this->comm = 0;
    }
    salesman(int id, float sal, float comm)
    {
        employee::id = 0;
        employee::sal = 0;
        this->comm = 0;
    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the commission for the salesman: ";
        cin >> this->comm;
        cout << endl;
    }
    void display()
    {
        employee::display();
        cout << "\nThe commission for the salesman is: " << this->comm << endl;
    }
};

class sales_manager : virtual public manager, virtual public salesman
{
public:
    sales_manager()
    {
        employee::id = 0;
        employee::sal = 0;
        manager::bonus = 0;
        salesman::comm = 0;
    }
    sales_manager(int id, float sal, float bonus, float comm)
    {
        employee::id = id;
        employee::sal = sal;
        manager::bonus = bonus;
        salesman::comm = comm;
    }
    void accept()
    {
        manager::accept();
        salesman::accept_salesman();
    }
    void display()
    {
        manager::display();
        salesman::display_salesman();
    }
};

int main()
{
    employee e;
    cout<<"\nEnter the details for the Employee:  "<<endl;
    e.accept();
    e.display();

    manager m;
    cout<<"\nEnter the details for the Manager:  "<<endl;
    m.accept();
    m.display();

    salesman sm;
    cout<<"\nEnter the details for the Salesman:  "<<endl;
    sm.accept();
    sm.display();
    
    sales_manager s;
    cout<<"\nEnter the details for the Sales Manager:  "<<endl;
    s.accept();
    s.display();

    
    return 0;
}