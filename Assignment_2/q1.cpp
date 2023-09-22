#include <iostream>
#include <string.h>

using namespace std;

namespace Nstudent
{
    class Student
    {
        int rollno;
        string name;
        int marks;

    public:
        void initStudent()
        {
            rollno = 1;
            name = "Shikhar sharma";
            marks = 94;
            cout << "The information of Student : " << name << " Roll no = " << rollno << " marks : " << marks << endl;
        }
        void printStudentOnConsole()
        {
            cout << "The information of Student : " << name << " Roll no = " << rollno << " marks : " << marks << endl;
        }
        void acceptStudentFromConsole()
        {
            int x;
            cout << "Enter the Roll no : ";
            cin >> rollno;
            cin.ignore();
            cout << "Enter the Name of the Student : ";
            getline(cin, name);

            cout << "Enter the Marks : ";
            cin >> marks;
        }
    };
}

using namespace Nstudent;

int main()
{
    Student s1;

    int ch;
    do
    {
        printf("\nYour choices are\n");
        printf("1)Intialize\n2)Enter the data\nPress 0 to exit....\n");
        printf("Enter the your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            s1.initStudent();
            break;

        case 2:
            s1.acceptStudentFromConsole();
            s1.printStudentOnConsole();
            break;

        default:
            printf("Choice not available\n");
            break;
        }
    } while (ch);

    return 0;
}