#include<iostream>
using namespace std;
class address{
    private:
    string buliding;
    string street;
    string city;
    int pin;
    public:
    address(string building,string street,string city,int pin)
    {
        this->buliding=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    address()
    {
        buliding="Kalavati Building";
        street="SB Road";
        city="Pune";
        pin=416011;
    }
    void accept()
    {
        cout<<"Enter Buliding"<<endl;
        cin>>this->buliding;
        cout<<"Enter Street"<<endl;
        cin>>this->street;
        cout<<"Enter City"<<endl;
        cin>>this->city;
        cout<<"Enter Pin"<<endl;
        cin>>this->pin;
    }

    void display()
    {
        cout<<"Building: "<<this->buliding<<endl;
        cout<<"Street: "<<this->street<<endl;
        cout<<"City: "<<this->city<<endl;
        cout<<"Pin: "<<this->pin<<endl;
    }

    string get_buliding()       //setter
    {
        return this->buliding;
    }
    string get_street()         //setter
    {
        return this->street;
    }
    string get_city()           //setter
    {
        return this->city;
    }
    int get_pin()               //setter
    {
        return this->pin;
    }
    void set_building(string building)
    {
        this->buliding=building;
    }
    void set_street(string street)
    {
        this->street=street;
    }
    void set_city(string city)
    {
        this->city=city;
    }
    void set_pin(int pin)
    {
        this->pin=pin;
    }
};
int main()
{
    address a;
    a.display();
    a.accept();
    a.display();
    a.set_city("Kop");
    a.display();
    return 0;
}