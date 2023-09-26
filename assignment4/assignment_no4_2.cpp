#include<iostream>
#define SIZE 5
using namespace std;
class stack{
    private:
    int top;
    int size;
    int *arr;
    int popval;

    public:
    stack(int size)
    {
        this->top=-1;
        if(size==0)
        {
            this->arr=new int[SIZE];
            this->size=SIZE;
        }
        else
        {
            this->arr=new int(size);
            this->size=size;
        }
    }
    /*void push(int p)
    {
        if(this->top>=this->size-1)
        {
            cout<<"stack is full";
        }
        else{
            top++;
            this->arr[top]=p;
        }
    }*/

    void push(int a)
    {
        if(this->top>=this->size-1)
        {
            cout<<"stack is full"<<endl;
        }
        else{
            top++;
            this->arr[top]=a;
        }
    }

    void pop()
    {
        if(this->top!= -1)
        {
            int val=this->top;
            top--;
            cout<<"Popped value= "<<val<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    /*void pop()
    {
        if(this->top!=-1)
        {
            this->popval=arr[top];
            top--;
            cout<<"pop values"<<this->popval<<endl;
        }
        else{
           cout<<"Empty Stack"<<endl; 
        }
    }*/
    void peek()
    {
        if(this->top!=-1)
        {
            cout<<"Peek Value"<<this->top<<endl;
        }
        else{
            cout<<"empty stack"<<endl;
        }
    }
    void isEmpty()
    {
        if(this->top!=-1)
        {
            cout<<"Stack is not empty"<<endl;
        }
        else{
            cout<<"Stack is Empty"<<endl;
        }
    }
    void isFull()
    {
        if(this->top>this->size)
        {
            cout<<"Stack is Full"<<endl;
        }
        else{
            cout<<"Stack is Not Full"<<endl;
        }
    }
    void print()
    {
        cout<<"---------Stack--------"<<endl;
        for(int i=this->top;i>=0;i--)
        {
            cout<<arr[i]<<endl;
            //this->top--;
        }
    }
    ~stack()
    {
        delete[] arr;
        delete arr;
        arr=NULL;
    }
};
int main()
{
    stack s(6);
    s.push(4);
    s.push(7);
    s.push(8);
    s.push(34);
    s.print();
    s.isEmpty();
    s.pop();
    s.print();
    s.isFull();
    s.push(69);
    s.print();
    return 0;
}