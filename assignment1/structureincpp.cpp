#include <iostream>
class test{
private:
    int hr;
    int min;
public:
    void acceptTime()
    {
        printf("Enter the hour");
        scanf("%d",&hr);
        printf("Enter the min");
        scanf("%d",&min);
    }
    void displayTime()
    {
        printf("Time %d :%d ",hr,min);
    }
};

int main()
{
    test t;
    t.acceptTime();
    //t.hr=10; not work if datamembers of test class are private
    t.displayTime();
    return 0;
}