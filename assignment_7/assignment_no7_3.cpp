#include<iostream>
using namespace std;
class Employee{
    private:
    int empid;
    double sal;
    string desination;
    public:
    Employee()
    {
        this->empid=0;
        this->sal=0;
    }

    int getSal()
    {
        return this->sal;
    }
    virtual void accept()=0;
    virtual void display()=0;
    friend class Manager;
    friend class Salesman;
    friend class Sales_manager;
    friend void displayEmployeesbyDegisnation(Employee* e,string subchoisetosee,int countAddEmp);
    virtual string role()=0;
};
class Manager: virtual public Employee {
    private:
    double bonus;
    public:
    Manager()
    {
        this->bonus=0;
    }
   string role()
   {
    this->desination="M";
    return this->desination;
   }

    void setBonus(double bonus)
    {
        this->bonus=bonus;
    }
    double getBonus()
    {
        return this->bonus;
    }
    
    void accept()
    {
        cout<<"Enter Empid"<<endl;
        cin>>empid;
        cout<<"Enter Sal"<<endl;
        cin>>sal;
        cout<<"Enter Bonus"<<endl;
        cin>>this->bonus;
    }
    void display()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Designation: "<<this->desination<<endl;
        cout<<"Empid: "<<this->empid<<endl;
        cout<<"Salary: "<<this->sal<<endl;
        cout<<"Bonus= "<<this->bonus<<endl;
        cout<<"-----------------------------"<<endl;
    }
   
};
class Salesman:virtual public Employee{
    private:
    double comm;
    public:
    Salesman(){
        this->comm=0;
        
    }
    string role()
   {
    this->desination="S";
    return this->desination;
   }
    double getComission()
    {
        return this->comm;
    }
    void setCommission()
    {
        cout<<"Enter Commission:"<<endl;
        cin>>this->comm;
    }
    
    void accept()
    {
        cout<<"Enter Empid"<<endl;
        cin>>empid;
        cout<<"Enter Sal"<<endl;
        cin>>sal;
        cout<<"Enter Commission"<<endl;
        cin>>this->comm;
    }
    void display()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Designation: "<<this->desination<<endl;
        cout<<"Empid: "<<this->empid<<endl;
        cout<<"Salary: "<<this->sal<<endl;
        cout<<"Commission= "<<this->comm<<endl;
        cout<<"-----------------------------"<<endl;
    }

};
class Sales_manager:public Salesman,public Manager{
    private:
    public:
    Sales_manager()
    {
        this->desination="SM";
    }
    string role()
   {
    this->desination="SM";
    return this->desination;
   }
    void accept()
    {
        Manager::accept();
        Salesman::setCommission();
    }
    void display()
    {
        
        Manager::display();
        cout<<"Commission: "<<Salesman::getComission()<<endl;
        cout<<"Designation: "<<this->desination<<endl;
        cout<<"-----------------------------"<<endl;
    }
};
int menu()
{
    int choise;
    cout<<"------*-------*-------*-------*-------*-------"<<endl;
    cout<<"0: Exit"<<endl;
    cout<<"1: Add Employee"<<endl;
    cout<<"2: Display Employees With Designsation"<<endl;
    cout<<"3: Display all Employees"<<endl;
    cout<<"Enter Choise"<<endl;
    cin>>choise;
    cout<<"------*-------*-------*-------*-------*-------"<<endl;
    return choise;
}
int main()
{

    int choise;
    int countAddEmp=0;
    string subchoisetosee="";
    Employee *e[10];
    int countForManager=0;
    int countForSalesman=0;
    int countForSalesManager=0;
    while((choise=menu())!=0)
    {
        int subchoise=0;
        switch (choise)
        {
        case 1:if(countAddEmp<10)
                {
                    cout<<"Choose 1:Add Manager"<<endl;
                    cout<<"2:Add Salesman"<<endl;
                    cout<<"3:Add Sales Manager"<<endl;
                    cin>>subchoise;
                }
                else{
                    cout<<"Cant added array full"<<endl;
                    break;
                }
                if(subchoise==1)
                {
                    e[countAddEmp]=new Manager();
                    e[countAddEmp]->accept();
                    e[countAddEmp]->role();
                    countAddEmp++;
                    countForManager++;
                }
                else if(subchoise==2)
                {
                    e[countAddEmp]=new Salesman();
                    e[countAddEmp]->accept();
                    e[countAddEmp]->role();
                    countAddEmp++;
                    countForSalesman++;
                }
                else if(subchoise==3)
                {
                    e[countAddEmp]=new Sales_manager();
                    e[countAddEmp]->accept();
                    e[countAddEmp]->role();
                    countAddEmp++;
                    countForSalesManager++;
                }
                else{
                    cout<<"Wrong Choise"<<endl;
                    break;
                }

            break;

        case 2:     cout<<"Enter Designation to see Employee"<<endl;
                    cout<<"Choose 1:See Managers press 'M'"<<endl;
                    cout<<"2:See Salesman press 'S'"<<endl;
                    cout<<"3:See Sales Manager press 'SM'"<<endl;
                    cin>>subchoisetosee;
                    for(int i=0;i<countAddEmp;i++)
                    {
                        if(e[i]->role()==subchoisetosee)
                        {
                            e[i]->display();
                        }
                    }
                    
                    break;
        case 3:
                    for(int i=0;i<countAddEmp;i++)
                    {
                        e[i]->display();
                    }
                    break;
        case 4: cout<<"Manager: "<<countForManager<<endl;
                cout<<"Salesman: "<<countForSalesman<<endl;
                cout<<"Sales Manager: "<<countForSalesManager<<endl;
                break;
        default:
            break;
        }
    }
    
    delete[] e;
    
        
    
    

    return 0;
}