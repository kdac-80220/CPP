#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    double volume;
public:
    Cylinder():radius(0.7),height(3)
    {

    }
    Cylinder(double radius, double height)
    {
        this->radius=radius;
        this->height=height;
    }
    double getRadius()
    {
        return this->radius;
    }
    void setRadius(double radius)
    {
        this->radius=radius;
    }
    double getHeight()
    {
        return this->height;
    }
    void setHeight(double height)
    {
        this->height=height;
    }

    double getVolume()
    {
        return this->volume=3.14*getRadius()*getRadius()*getHeight();
    }
    void printVolume()
    {
        cout<<"Volume= "<<getVolume()<<endl;;
    }
    void getRadiusHeight()
    {
        cout<<"Enter Radius"<<endl;
        cin>>radius;
        cout<<"Enter Height"<<endl;
        cin>>height;
        setHeight(height);
        setRadius(radius);
    }
};

int main()
{
    Cylinder c;
    int choise;
    double radius,height;
        do{
            cout<<"Enter 1.Insert Height and Radius"<<endl;
            cout<<"2.Show Height and Radius"<<endl;
            cout<<"3.Calculate Volume"<<endl;
            cout<<"0.Exit"<<endl;
            cin>>choise;
            switch(choise)
            {
                case 1:c.getRadiusHeight();
                        break;
                case 2:cout<<"Height= "<<c.getHeight()<<endl;;
                        cout<<"Width= "<<c.getRadius()<<endl;
                        break;
                case 3:c.printVolume();
                        break;
                case 0:cout<<"Thank You For using our application"<<endl;
                        break;
                default:cout<<"Wrong Input"<<endl;
                        
            }
        }while(choise!=0);
}