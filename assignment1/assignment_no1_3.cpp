#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    void initStudent(){
        rollno=1;
        name="Mahadev";
        marks=70;
    }
    void printStudentOnConsole(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks"<<marks<<endl;
    }
    void acceptStudentFromConsole(){
        cout<<"Enter roll no"<<endl;
        cin>>rollno;
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter Marks"<<endl;
        cin>>marks;
    }
};

int main()
{
    student s;
    int choise;
    do{
        cout<<"Enter Choise 1.Default 2.Enter Data 3.Show Inserted Data 4.Exit"<<endl;
        cin>>choise;
        switch (choise)
        {
        case 1:s.initStudent();
                s.printStudentOnConsole();
            break;
        case 2:s.acceptStudentFromConsole();
            break;
        case 3:s.printStudentOnConsole();
            break;
        case 4:cout<<"Thank You"<<endl;
            break;
        
        default:cout<<"Wrong input"<<endl;
            break;
        }
    }while(choise>0 && choise<4);
    return 0;
}