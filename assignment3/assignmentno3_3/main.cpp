#include "./cylinder.h"


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
    return 0;
}