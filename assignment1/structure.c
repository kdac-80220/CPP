#include<stdio.h>
struct time
{
    int hr;
    int min;
};
void acceptTime(struct time *t)
{
    printf("Enter the time ");
    scanf("%d",&t->hr);
    printf("Enter the minutes");
    scanf("%d",&t->min);
    //printf("%d",*t);
}

void displayTime(struct time t)
{
    printf("time is %d : %d ",t.hr,t.min);
}
int main(){
    struct time t1;
    acceptTime(&t1);
   
    displayTime(t1);
    return 0;
}