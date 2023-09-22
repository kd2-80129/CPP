#include <iostream>

class Date
{
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 22;
        month = 9;
        year = 23;
        printf("%d/%d/%d\n", day, month, year);
    }
    void printDateOnConsole()
    {
        printf("Your entered date is: \n");
        printf("%d/%d/%d\n", day, month, year);
    }
    void acceptDateFromConsole()
    {
        printf("Enter the Day: ");
        scanf("%d", &day);
        printf("Enter the Month: ");
        scanf("%d", &month);
        printf("Enter the Year: ");
        scanf("%d", &year);
    }

    bool isleapYear()
    {
        int year;
        bool result = true;
        printf("Enter the year: ");
        scanf("%d", &year);
        if (year % 400 == 0)
            return true;
        else if (year % 100 != 0 && year % 4 == 0)
            return true;
        else
            return false;

        return result;
    }
};

int main()
{
    Date d1;

    int ch;
    do
    {
        printf("\nYour choices are\n");
        printf("1)View the Date\n2)Enter your own date\n3)Check for leap year\nPress 0 to exit....\n");
        printf("Enter the your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;
        case 3:
            bool result;
            result = d1.isleapYear();
            if (result == true)
                printf("Yes\n");
            else
                printf("No\n");
            break;
        default:
            printf("Choice not available\n");
            break;
        }
    } while (ch);
    return 0;
}