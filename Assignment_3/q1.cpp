#include <iostream>
using namespace std;

class Volume
{
private:
    int length;
    int width;
    int height;

public:
    Volume()
    {
        length = 0;
        width = 0;
        height = 0;
    }
    // Volume(int length, int width, int height)
    // {
    //     this->height = height;
    //     this->length = length;
    //     this->width = width;
    // }
    void accept()
    {
        cout << "Enter the length: ";
        cin >> this->length;
        cout << "Enter the width: ";
        cin >> this->width;
        cout << "Enter the height: ";
        cin >> this->height;
    }
    int calculateVolume(int length, int width, int height)
    {
        return length * width * height;
    }
    void display()
    {
        int volume;
        volume = this->length * this->width * this->height;
        cout<<"Calculated volume is: "<<volume<<endl;
    }
};

int main()
{
    Volume v1;
    int ch, length, width, height;
    do
    {
        cout << "********************************************************" << endl;
        cout << "Your Choices are....." << endl;
        cout << "1)Enter the data...." << endl
             << "2)calculate the volume ..." << endl
             << "Enter 0 to exit" << endl;
        cout << "";
        cout << "*********************************************************" << endl;
        cout << "Enter your Choice: ";
        cin >> ch;
        cout << "*********************************************************" << endl;
        switch (ch)
        {
        case 0: cout<<"Exiting."<<endl;
            break;
        case 1:
            v1.accept();
            v1.display();
            break;
        case 2:
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            cout << "Enter the height: ";
            cin >> height;
            int result;
            result = v1.calculateVolume(length, width, height);
            cout<<"Result is : "<<result<<endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (ch);

    return 0;
}