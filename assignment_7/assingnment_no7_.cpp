#include<iostream>
using namespace std;

class Sales{
    public:
    virtual void acceptData()=0;
    virtual void displayData()=0;
    virtual double getPrice()=0;
};
class Books: public Sales
{
    private:
        int bookid;
        string author;
        string book_title;
        double book_price;
    public:
    void acceptData()
    {
        cout<<"Enter Book ID: "<<endl;
        cin>>this->bookid;
        cout<<"Enter Book Author: "<<endl;
        cin>>this->author;
        cout<<"Enter Book Title: "<<endl;
        cin>>this->book_title;
        cout<<"Enter Book Price: "<<endl;
        cin>>this->book_price;
    }
    void displayData()
    {
        cout<<"Book ID:"<<this->bookid<<endl;
        cout<<"Book Author:"<<this->author<<endl;
        cout<<"Book Title:"<<this->book_title<<endl;
        cout<<"Book Price:"<<this->book_price<<endl;
    }

    double getPrice()
    {
        return this->book_price;
    }
};
class Tapes: public Sales
{
    private:
        int tapeid;
        string artist;
        string tape_title;
        double tape_price;

    public:
    void acceptData()
    {
        cout<<"Enter Tape ID: "<<endl;
        cin>>this->tapeid;
        cout<<"Enter Tape Artist: "<<endl;
        cin>>this->artist;
        cout<<"Enter Tape Title: "<<endl;
        cin>>this->tape_title;
        cout<<"Enter Tape Price: "<<endl;
        cin>>this->tape_price;
    }
    void displayData()
    {
        cout<<"Tape ID:"<<this->tapeid<<endl;
        cout<<"Tape Artist:"<<this->artist<<endl;
        cout<<"Tape Title:"<<this->tape_title<<endl;
        cout<<"Tape Price:"<<this->tape_price<<endl;
    }

    double getPrice()
    {
        return this->tape_price;
    }
};
int menu()
{
    int choise;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Book sold" << endl;
    cout << "2. Tape Sold" << endl;
    cout << "3. Display Orders" << endl;
    cout << "4. Total Bill" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choise;
    cout << "--------------------" << endl;
    return choise;
}
int main()
{
    Sales *s[3];
    int choise;
    int index=0;
    double bill=0;
    while((choise=menu())!=0)
    {
        switch(choise)
        {
            case 1:if(index<3)
                    {
                        s[index]=new Books();
                        s[index]->acceptData();
                        
                        index++;
                    }
                    break;
            case 2:if(index<3)
                    {
                        s[index]=new Tapes();
                        s[index]->acceptData();
                        
                        index++;
                    }
                    break;
            case 3: for(int i=0;i<index;i++)
                       s[i]->displayData();
                    break;
            case 4: for(int i=0;i<index;i++)
                    bill=bill+s[i]->getPrice();
                    cout<<"Total Bill= "<<bill<<endl;
                    break;
            default: cout<<"Wrong Input"<<endl;
            
        }
    }
}