#include<iostream>
using namespace std;
class volume{
    private:
    double length;
    double width;
    double height;
    public:
    volume()
    {
    length=0;
    width=0;
    height=0;
    }

    /*volume(double length,double width,double height){
    this->length=length;
    this->width =width;
    this->height=height;  
    }*/
    
    void acceptValues()
    {
        cout<<"Enter Length ";
        cin>>length;
        cout<<"Enter Breath ";
        cin>>width;
        cout<<"Enter height ";
        cin>>height;
    }
    
    void showVolume()
    {
        cout<<"Volume: "<<this->length*this->width*this->height<<endl;
    }

    void showlwh()
    {
        cout<<"Length : "<<this->length;
        cout<<"Width : "<<this->width;
        cout<<"Height : "<<this->height;
    }

};
int main()
{
    volume v;
    int length,width,height,choise;
    do{
       cout<<"Enter 1.Insert length,width,height to calculate volume"<<endl;
       cout<<"2.Show length,width,height "<<endl;
       cout<<"3.Show Volume"<<endl;
       cout<<"0.exit "<<endl; 
       cin>>choise;

       switch(choise)
       {
        case 1:v.acceptValues();
                break;
        case 2:v.showlwh();
                break;
        case 3:v.showVolume();
                break;
        case 0:cout<<"Thank You For using application...."<<endl;
                break;
        default: cout<<"Wrong Value"<<endl;
       }
    }while(choise!=0);
    
    return 0;
}