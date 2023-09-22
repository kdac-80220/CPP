#include <iostream>
struct date
{
int day;
int year;
int month;

    void initDate()
    {
        day=25;
        month=06;
        year=2001;
    }
    void printDateOnConsole()
    {
        printf("Date: %d/%d/%d\n",day,month,year);
    }

    void acceptDateFromConsole()
    {
        printf("Enter Day");
        scanf("%d",&day);
        printf("Enter Month");
        scanf("%d",&month);
        printf("Enter Year");
        scanf("%d",&year);
    }

    bool isLeapYear()
    {
        int leap;
        leap=year;
        if(leap%100!=0 && leap%4==0)
        {
            printf("Leap Year ",year);
            return true; 
        }
        else if(leap%400==0 && leap%4==0)
        {
            printf("Leap Year ",year);
            return true; 
        }
        else
            {
                printf("Not Leap Year ",year);
                return false;
            }
    }
};
int main()
{
    struct date d;
    int choise;
    
    do{
        printf("Enter Choise 1.Default Date 2.Enter Date 3.Display Date 4.Check leap Year 5.Exit\n");
        scanf("%d",&choise);
         switch (choise)
        {
        case 1: d.initDate();
                d.printDateOnConsole();
            break;
        case 2: d.acceptDateFromConsole();
            break;
        case 3: d.printDateOnConsole();
        break;
        case 4: d.isLeapYear();
            break;
        case 5: printf("Thank You");
            break;
        default:
            break;
    }
    }while(choise>0 && choise<5);
   
    return 0;    
}