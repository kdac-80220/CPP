#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void initDate(struct date *d)
{
    d->day=25;
    d->month=10;
    d->year=2023;
    printf("Default Date:%d/%d/%d \n",d->day,d->month,d->year);
};
void acceptDateFromConsole(struct date *d){
    printf("Enter day");
    scanf("%d",&d->day);
    
    printf("Enter month");
    scanf("%d",&d->month);
    printf("Enter Year");
    scanf("%d",&d->year);
};
void printDateOnConsole(struct date *d)
{
    printf("Date:%d/%d/%d\n",d->day,d->month,d->year);
};
int main(){
    struct date d1;
    int choise;
    do{
        printf("Enter Choise 1.Show Default Date 2.Update Date 0.Exit\n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: initDate(&d1);
                    break;
            case 2: acceptDateFromConsole(&d1);
                    printDateOnConsole(&d1);
                    break;
            case 0: printf("Thank You");
                    break;
            default: printf("Wrong Input");
                    break;
        };
    }while(choise>0 && choise<3);
    //initDate(&d1);
    //acceptDateFromConsole(&d1);
    //printDateOnConsole(&d1);
    
    return 0;
}