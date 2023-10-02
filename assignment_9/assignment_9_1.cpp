#include<iostream>
using namespace std;

int factorial(int num)
{
    
    int fact=1;
    if(num<0)
        throw 1;
    if(num==0)
    {
        return 1;
    }

    return fact=num*factorial(num-1);
     
}

int main()
{
    int result=0;
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    try{
        result=factorial(n);
        cout<<"Factorial= "<<result<<endl;
    }
    catch(int error)
    {
        cout<<"You can't have factorial of negative number"<<endl;
    }
    

}