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
    int calculateSize()
    {
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]>0)
            {
                count++;
            }
        }
        return count;
    }
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
            this->arr[top]=0;
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

    stack(stack &s)
    {
        arr=new int[size];
        // int c=calculateSize();
        // // for(int i=0;i<size;i++)
        // arr[i]=s.arr[i];
    }
    void operator=(stack &s)
    {
        for(int i=0;i<size;i++)
        {
            arr[i]=s.arr[i];
        }
    }
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
    void printCarray()
    {
        cout<<"---------Stack--------"<<endl;
        for(int i=size-1;i>=0;i--)
        {
            if(arr[i]>0)
            cout<<arr[i]<<endl;
            //this->top--;
        }
    }
    // ~stack()
    // {
    //     delete[] arr;
    //     delete arr;
    //     arr=NULL;
    // }
};
int main()
{
    stack s(6);
    s.push(4);
    s.push(7);
    s.push(8);
    s.push(34);
    
    s.print();
        
    stack s1(5);
    s1=s;
    
    s.push(13);
    s.print();
    s1.printCarray();
    return 0;
}