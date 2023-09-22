#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 22;
    ptrDate->month = 9;
    ptrDate->year = 23;
    printf("%d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("Your entered date is: \n");
    printf("%d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the Day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter the Month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter the Year: ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date d1;

    int ch;
    do
    {
        printf("Your choices are\n");
        printf("1)View the Date\n2)Enter your own date\nPress 0 to exit....\n");
        printf("Enter the your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            initDate(&d1);
            break;
        case 2:
            acceptDateFromConsole(&d1);
            printDateOnConsole(&d1);
            break;
        default:
            printf("Choice not available\n");
            break;
        }
    } while (ch);
    return 0;
}