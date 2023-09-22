#include<iostream>
using namespace std;
int rollno=25;
namespace Nstudent{
    int rollno=10;
    namespace Nastudent{
        int rollno=1001;
    }
}

int main()
{
    int a=33;
    cout<<"a in local: "<<rollno<<endl;
    cout<<"a in global: "<<::rollno<<endl;
    cout<<"a in namespace: "<<Nstudent::rollno<<endl;
    cout<<"a in nested namespace: "<<Nstudent::Nastudent::rollno<<endl;
    using namespace Nstudent;
    cout<<"a in namespace: "<<Nstudent::rollno<<endl;
    cout<<"a in nested namespace: "<<Nastudent::rollno<<endl;
    return 0;
}

