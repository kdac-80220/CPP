#include<iostream>
class date{
    private:
    int day;
    int year;
    int month;
    public:
    void initDate(){
        day=25;
        month=06;
        year=2022;
    }
    void printDateOnConsole(){
        printf("Date:%d/%d/%d\n",day,month,year);
    }
    void acceptDateFromConsole(){
        printf("Enter Day");
        scanf("%d",&day);
        printf("Enter Month");
        scanf("%d",&month);
        printf("Enter Year");
        scanf("%d",&year);
    }
    bool isLeapYear(){
        int leap=year;
        if(leap%100!=0 and leap%4==0)
        {
            printf("Leap Year %d\n",leap);
            return true;
        }
        else if(leap%400==0 and leap%4==0)
        {
            printf("Leap year %d\n",leap);
            return true;
        }
        else{
            printf("Not Leap year %d\n",leap);
            return false;
        }
    }
};

int main()
{
    date d;
    d.initDate();

    int choise;
    do{
        printf("Enter Choise 1.Default Date 2.Enter Date 3.Display Date 4.Check Leap 5.Exit");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1:d.printDateOnConsole();
                break;
            case 2:d.acceptDateFromConsole();
                break;
            case 3:d.printDateOnConsole();
                break;
            case 4:d.isLeapYear();
                break;
            case 5:printf("Thank You...");
                break;
            default:printf("Wrong Input...");
                break;
        }
    }while(choise>0 && choise<5);
    return 0;
}