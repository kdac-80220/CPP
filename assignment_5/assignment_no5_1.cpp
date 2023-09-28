#include<iostream>
using namespace std;
class Student
{
    private:
    static int rollno;
    string name;
    string gender;
    double percentage;
    double marks1;
    double marks2;
    double marks3;
public:
    Student()
    {
        rollno++;
    }
    void acceptInformation()
    {
        cout<<"Enter Your  Good Name"<<endl;
        cin>>this->name;
        cout<<"Enter Your Gender (Enter only M/F)"<<endl;
        cin>>this->gender;
        cout<<"Enter Marks m1"<<endl;
        cin>>this->marks1;
        cout<<"Enter Marks m2"<<endl;
        cin>>this->marks2;
        cout<<"Enter Marks m3"<<endl;
        cin>>this->marks3;
        this->rollno=rollno;
        this->percentage=(marks1+marks2+marks3)/3;
    }
    void showInformation() const
    {
        cout<<"Rollno: "<<this->rollno<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Gender: "<<this->gender<<endl;
        cout<<"Percentage: "<<this->percentage<<endl;
    }
};

int Student::rollno=100;
int main()
{
    Student s;
    s.acceptInformation();
    s.showInformation();
    return 0;
}