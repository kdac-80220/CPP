#include<iostream>
using namespace std;
class Time{
    private:
    int hr;
    int min;
    int sec;

    public:
    Time()
    {
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    
    Time(int h,int m,int s)
    {
        this->hr=h;
        this->min=m;
        this->sec=s;
    }

    int getHour()
    {
        return this->hr;
    }

    int getMinute()
    {
        return this->min;
    }
    
    int getSeconds()
    {
        return this->sec;
    }

    void setHour()
    {
        cout<<"Enter Hour"<<endl;
        cin>>this->hr;
    }

    void setMinute()
    {
        cout<<"Enter Minutes"<<endl;
        cin>>this->min;
    }
    void setSeconds()
    {
        cout<<"Enter Seconds"<<endl;
        cin>>this->sec;
    }
    void printTime()
    {
        cout<<"Time:"<<this->hr<<":"<<this->min<<":"<<this->sec<<endl;
    }
};
int main()
{
    Time **t=new Time*[1];
    t[0]=new Time;
    
    //t[0]->getHour();
    //t[0]->getMinute();
    //t[0]->getSeconds();
    t[0]->printTime();
    t[0]->setHour();
    t[0]->setMinute();
    t[0]->setSeconds();
    t[0]->printTime();

    delete[] t[0];
    delete t;
    return 0;
}