#include <iostream>
using namespace std;

enum acc_type
{
    SAVING = 1,
    CURRENT,
    DMAT
};

class Insufficient_Funds
{
private:
    int accid;
    double current_balance;
    double withdraw_amount;

public:
    Insufficient_Funds(int accid, double current_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->current_balance = current_balance;
        this->withdraw_amount = withdraw_amount;
    }

    void display()
    {
        cout << "Acno: " << this->accid << " Insuiffent Balance: " << this->current_balance << endl;
        cout << "Withdraw Unsuccessful" << endl;
    }
};

class Accounts
{
private:
    int id;
    acc_type type;
    double balance;
    int index = 0;

public:
    Accounts()
    {
    }
    Accounts(int id, int type, double bal)
    {
        this->id = id;
        this->type = (acc_type)type;
        this->balance = bal;
    }
    void accept()
    {
        int t;

        cout << "Enter the Id: " << endl;
        cin >> id;
        if (id <= 0)
            throw 1;
        cout << "Enter Account Type" << endl;
        cin >> t;
        type = (acc_type)t;
        if (type <= 0)
            throw 1;
        cout << "Enter Balance" << endl;
        cin >> this->balance;
        throw 1;
        index++;
    }
    int getIndex()
    {
        return index;
    }
    void display()
    {
        cout << "ID:" << this->id << endl;
        cout << "Account Type:" << static_cast<acc_type>(type) << endl;
        cout << "Balance:" << this->balance << endl;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setType(int t)
    {
        this->type = (acc_type)t;
    }

    void deposite(double amt)
    {
        this->balance = this->balance + amt;
    }
    void withdraw(double amt)
    {
        if (this->balance < amt)
            throw Insufficient_Funds(this->id, this->balance, amt);
        this->balance = this->balance - amt;
    }
    int getId()
    {
        return this->id;
    }

    double getBalance()
    {
        return this->balance;
    }

    int getAcc_type()
    {
        int t;
        return t = (int)type;
    }
};

int menu()
{
    int choise;
    cout << "*********************" << endl;
    cout << "0.Exit" << endl;

    cout << "1.Deposite" << endl;
    cout << "2.Withdraw" << endl;
    cout << "3.Check Balance" << endl;
    cout << "4.Display Accounts" << endl;
    cout << "5.Add Account" << endl;
    cout << "Enter choise" << endl;
    cin >> choise;
    return choise;
};

int main()
{
    int choise;
    int createUser = 0;
    Accounts *a[5];

    Accounts io; // object to get index from Account class to print acounts

    int ac_type;
    int ac_no;
    double amt;
    int count = 0;
    while ((choise = menu()) != 0)
    {
        switch (choise)
        {
        case 1:
            cout << "Enter Account Number" << endl;
            cin >> ac_no;
            cout << "Enter Amount" << endl;
            cin >> amt;
            for (int i = 0; i < a[0]->getIndex(); i++)
            {
                if (a[i]->getId() == ac_no)
                {
                    a[i]->deposite(amt);
                }
            }
            break;

        case 2:
            try
            {
                cout << "Enter Account Number" << endl;
                cin >> ac_no;
                cout << "Enter Amount" << endl;
                cin >> amt;
                for (int i = 0; i < a[0]->getIndex(); i++)
                {
                    if (a[i]->getId() == ac_no)
                    {
                        a[i]->withdraw(amt);
                        cout << "Withdraw Successful" << endl;
                        cout << "Balance:" << a[i]->getBalance() << endl;
                    }
                }
            }
            catch (Insufficient_Funds error)
            {
                error.display();
            }

            break;
        case 3:
            cout << "Enter Account Number" << endl;
            cin >> ac_no;
            for (int i = 0; i < a[0]->getIndex(); i++)
            {
                if (a[i]->getId() == ac_no)
                {
                    cout << "Balance:" << a[i]->getBalance() << endl;
                }
            }
            break;
        case 4:
            for (int i = 0; i < count; i++)
            {
                a[i]->display();
            }
            break;
        case 5:
            try
            {
                if (count < 5)
                {
                    a[count] = new Accounts;
                    a[count]->accept();
                    count++;
                }
                else
                {
                    cout << "Capacity Full No Other Account Created" << endl;
                }
            }
            catch (int error)
            {
                cout << "Account number,Account Type,Balance can not be negative or Zero" << endl;
            }
            break;
        default:
            cout << "Wrong Choise" << endl;
            break;
        }
    }
    // Accounts a;
    // a.accept();
    // a.display();
    return 0;
}