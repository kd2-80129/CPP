#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

class Student
{
private:
    string name;
    char gender;
    int rollno;
    float m1;
    float m2;
    float m3;

public:
    void accept()
    {
        cout << "The Name of the student is: ";
        cin >> this->name;
        cout << "The Roll Number of the student is: ";
        cin >> this->rollno;
        cout << "The Gender of the student is: ";
        cin >> this->gender;
        cout << "The marks of the student for three subjects is: ";
        cin >> this->m1 >> this->m2 >> this->m3;
        cout<<endl;
    }
    void print()
    {
        float percen = ((this->m1 + this->m2 + this->m3) / 300) * 100;
        cout << endl;
        cout << "The Name of the student is: " << this->name << endl;
        cout << "The Roll Number of the student is: " << this->rollno << endl;
        cout << "The Gender of the student is: " << this->gender << endl;
        cout << "The Percentage of the student is: " << percen << endl;
        cout << endl;
    }
    friend void sortRecords(Student arr[], int n);
    friend int searchRecords(Student arr[],int rollno,int n);        
};

void sortRecords(Student arr[], int n)
{
    int idx;

    for (int i = 0; i < n; i++)
    {

        idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j].rollno < arr[idx].rollno)
                idx = j;
        }

        if (idx != i)
            swap(arr[idx], arr[i]);
    }
}
int searchRecords(Student arr[], int rollno,int n){
    for(int  i = 0 ; i < n ; i++){
        if(arr[i].rollno == rollno)
            return i;
    }
    return -1;
}

int main()
{
    int n, ch;
    cout << "How many Students ? ";
    cin >> n;

    Student arr[n];
    do
    {
        cout << "*******************************************************" << endl;
        cout << "1)Enter the Students data" << endl;
        cout << "2)Display all the students" << endl;
        cout << "3)Sort the students according to rollno" << endl;
        cout << "4)Search a particular Student" << endl;
        cout << "Press 0 to exit...." << endl;
        cout << "*******************************************************" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << "*******************************************************" << endl;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
                arr[i].accept();
            break;
        case 2:
            for (int i = 0; i < n; i++)
                arr[i].print();
            break;
        case 3: sortRecords(arr, n);
            break;
        case 4: int rollno;
            cout<<"Enter the Roll number of the student: ";
            cin>>rollno;
            int j;
            j = searchRecords(arr,rollno,n);
            arr[j].print();
            break;
        default:
            cout << "Choice Invalid" << endl;
            break;
        }
    } while (ch);

    

    return 0;
}
