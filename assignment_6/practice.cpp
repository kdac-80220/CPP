#include<iostream>
using namespace std;
class A{
    private:
    int Anum1=10;
    protected:
    int Anum2=20;
    public:
    int Anum3=30;
    
};
class B:public A{
    private:
    int Bnum1=400;
    protected:
    int Bnum2=500;
    public:
    int Bnum3=60;
    void test(){
        cout<<Anum1; //not accissible
        cout<<Anum2;    //accissible
        cout<<Anum3;    //accissible
    }
    
};
class C:public B
{
private:
    int Cnum1=70;
protected:
    int Cnum2=80;
public:
    int Cnum3=90;
    void test(){
        cout<<Bnum1; //not accissible
        cout<<Bnum2;    //accissible
        cout<<Bnum3;    //accissible
        cout<<Anum2;    //accissible until we donot change the mode of inheritance of class Class B:
                            // :public A to class B:private/protected A, if we do this then it also 
                            // not accessible 
        cout<<Anum3;    //accissible
    }
};
int main()
{
    C c1;
    cout<<c1.Cnum3;

    B b1;
    cout<<b1.Bnum3;

    A a1;
    cout<<a1.Anum3;
}


