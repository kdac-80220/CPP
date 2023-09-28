#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;

    public:
    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }
    Date(int d,int m,int y)
    {
        this->day=d;
        this->month=m;
        this->year=y;
    }                                                                                                                                                                                                                                                                        

    void acceptDate()
    {
        cout<<"Enter Day"<<endl;
        cin>>this->day;
        cout<<"Enter Month"<<endl;
        cin>>this->month;
        cout<<"Enter Year"<<endl;
        cin>>this->year;
    }

    void showDate()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }
    bool isleap()
    {
        if((this->year%100 !=0 && this->year%4==0) || (this->year%4==0 && this->year%400==0))
        {
            cout<<"leap year"<<endl;
            return true;
        }
        else{
            cout<<"not leap year"<<endl;
            return false;
        }
    }
   /* Date getDate()
    {
        return this->showDate();
    }*/
    int getDay()
    {
        return this->day;
    }

    int getMonth()
    {
        return this->month;
    }

    int getYear()
    {
        return this->year;
    }

    void setDay(int day)
    {
        this->day=day;
    }
    void setMonth(int mon)
    {
        this->month=mon;
    }
    void setYear(int year)
    {
        this->year=year;
    }
};
class Person{
    private:
    string name;
    string address;
    Date dob;
    public:
    Person()
    {
        this->name="";
        this->address="";
        //this->dob=dob;
    }
    void acceptPerson()
    {
        cout<<"Enter Name= "<<endl;
        cin>>this->name;
        cout<<"Address= "<<endl;
        cin>>this->address;
        cout<<"Enter Dob"<<endl;
        dob.acceptDate();
    }
    void showPersonData()
    {
        cout<<"Name= "<<this->name<<endl;
        cout<<"Address= "<<this->address<<endl;
        cout<<"Dob= ";
        dob.showDate();
    }
    string getName()
    {
        return this->name;
    }
    string getPersonAddress()
    {
        return this->address;
    }
    void setName(string n)
    {
        this->name=n;
    }
    void setAddress(string a)
    {
        this->address=a;
    }
    void setDate(int d,int mon,int year)
    {
        dob.setDay(d);
        dob.setMonth(mon);
        dob.setYear(year);
        //dob.acceptDate();
    }

    Date getDate()
    {
        cout<<"Date: "<<dob.getDay()<<"/"<<dob.getMonth()<<"/"<<dob.getYear();
        return this->dob;
    }
};
class Employee{
    private:
    int empid;
    double sal;
    string dept;
    Date joinDate; 
    Person p;
    public:
    Employee ()
    {
        this->empid=0;
        this->sal=0;
        this->dept="";
    }
    Employee (int empid,double sal,string dept,int day,int mon,int year):joinDate(day,mon,year)
    {
        this->empid=empid;
        this->sal=sal;
        this->dept=dept;
    }
    void acceptEmpData()
    {
        p.acceptPerson();
        cout<<"Enter Empid= "<<this->empid<<endl;
        cout<<"Enter Sal= "<<this->sal<<endl;
        cout<<"Enter Dept= "<<this->dept<<endl;
        cout<<"Enter Date of joining= "<<endl;
        joinDate.acceptDate();
    }
    
    void showEmpData()
    {
        p.showPersonData();
        cout<<"Empid= "<<this->empid<<endl;
        cout<<"Sal= "<<this->sal<<endl;
        cout<<"Dept= "<<this->dept<<endl;
        cout<<"Date Of Joining"<<endl;
        joinDate.showDate();
    }

    int getId() const
    {
        cout<<"Emp Id="<<this->empid;
        return this->empid;
    } 
    double getSal() const
    {
        cout<<"Emp Sal="<<this->sal;
        return this->sal;
    } 
    string getDept() const
    {
        cout<<"Emp Dept="<<this->dept;
        return this->dept;
    } 
    void setId(int id)
    {
        this->empid=id;
    }
    void setSal(double s)
    {
        this->sal=s;
    }
    void setDept(string d)
    {
        this->dept=d;  
    }

    Date getDate() 
    {
        //cout<<"Date: "<<joinDate.getDay()<<"/"<<joinDate.getMonth()<<"/"<<joinDate.getYear();


        //another logic
        cout<<"Date= "<<endl;
        joinDate.showDate();
        return this->joinDate;
    }

    void setDate(int d,int mon,int year)
    {
        joinDate.setDay(d);
        joinDate.setMonth(mon);
        joinDate.setYear(year);
        //joinDate.acceptDate();
    }
};
int main()
{
    Person p;
    Employee e;
    Date d(10,10,2021);
    d.isleap();
    
   /* e.acceptEmpData();
    e.showEmpData();
    e.setDate(10,10,2020);
    e.showEmpData();*/
}