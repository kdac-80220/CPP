#include<iostream>
using namespace std;

class tollbooth
{
    private:
        double cashTotal;
        unsigned int cars; 

    public:
    tollbooth()
    {
       cashTotal=0;
       cars=0; 
    }

    void payingCar()
    {
        this->cashTotal=this->cashTotal+0.50;
    }

    void nopayCar()
    {
        this->cars=this->cars+1;
    }

    void showData()
    {
        cout<<"Toll Paying Cars= "<<this->cashTotal*2<<endl;
        cout<<"No Toll Paying Cars= "<<this->cars<<endl;
        cout<<"No Toll Paying Cars= "<<this->cars+(this->cashTotal*2)<<endl;
    }
};

int main()
{
    tollbooth t;
    int choise;
    do{
        cout<<"Enter Choise "<<endl;
        cout<<"1.Toll Paying Car"<<endl;
        cout<<"2.Non Toll Paying Car"<<endl;
        cout<<"3.Show Data"<<endl;
        cout<<"0.Exit"<<endl;
        cin>>choise;
        switch(choise)
        {
            case 1: t.payingCar();
                    break;
            case 2: t.nopayCar();
                    break;
            case 3: t.showData();
                    break;
            case 0: cout<<"Thank You For Using Application..."<<endl;
                    break;
            default: cout<<"Wrong Input"<<endl;
        }
    }while(choise!=0);
}