#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
    }

    Distance(int f, int i)
    {
        this->feet = f;
        this->inches = i;
    }

    Distance(Distance &d)
    {
        this->feet = d.feet;
        this->inches = d.inches;
    }

    void displayfeetinches()
    {
        cout << "Feet: " << this->feet << "Inches: " << this->inches << endl;
    }

    Distance operator+(Distance d)
    {
        Distance result;
        result.feet = this->feet + d.feet;
        result.inches = this->inches + d.inches;
        return result;
    }
    friend bool operator==(Distance d1, Distance d2);
    friend void operator<<(ostream &out, Distance &d);
    friend void operator>>(istream &in, Distance &d);
    friend Distance operator--(Distance d);
    Distance operator++()
    {
        Distance z;
        z.feet = this->feet + 3;
        z.inches = this->inches + 4;
        return z;
    }
};
Distance operator--(Distance d)
{
    Distance result;
    result.feet=d.feet-5;
    result.inches=d.inches-5;
    return result;
}
bool operator==(Distance d1, Distance d2)
{
    if (d1.feet == d2.feet && d1.inches==d1.inches)
        return true;
    else
        return false;
}

void operator<<(ostream &out, Distance &d)
{
    out << "Feet: " << d.feet << "inches" << d.inches << endl;
}

void operator>>(istream &in, Distance &d)
{
    cout << "Enter Feet" << endl;
    in >> d.feet;
    cout << "Enter inches" << endl;
    in >> d.inches;
}
int main()
{
    Distance d(10, 20);

    Distance d1(10, 20);

    Distance result = d + d1;
    result.displayfeetinches();
    if (d1 == d)
    {
        cout << "Feet Matching";
    }
    else
    {
        cout << "Feet Not Matching";
    }

    Distance o(99, 98);

    cout << o;

    Distance g;
    cin >> g;
    cout << g;

    Distance w;
    w =++d;
    w.displayfeetinches();

    Distance min;
    min=--d;
    d.displayfeetinches();
    min.displayfeetinches();
}