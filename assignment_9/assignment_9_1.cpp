#include <iostream>
using namespace std;
class Exception
{
    private:
    string mess;
    int error_code;
    public:
    Exception()
    {
        this->error_code=1001;
        this->mess ="Oppps...!!! Somthing went wrong....";
    }
    Exception (int err,string msg)
    {
        this->error_code=err;
        this->mess=msg;
    }
    void displayException()
    {
        cout<<"ERROR: "<<this->error_code<<"::"<<this->mess<<endl;
    }
};
int factorial(int num)
{

    int fact = 1;
    if (num < 0)
        throw Exception(1005,"Factorical con not possible of negative number");
    if (num == 0)
    {
        return 1;
    }
    return fact = num * factorial(num - 1);
}

int main()
{
    int result = 0;
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    try
    {
        result = factorial(n);
        cout << "Factorial= " << result << endl;
    }
    catch(Exception err)
    {
        err.displayException();
    }
}