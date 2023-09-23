#include "./cylinder.h";
    Cylinder::Cylinder():radius(0.7),height(3){}
    Cylinder::Cylinder(double radius, double height)
    {
        this->radius=radius;
        this->height=height;
    }
    double Cylinder::getRadius()
    {
        return this->radius;
    }
    void Cylinder::setRadius(double radius)
    {
        this->radius=radius;
    }
    double Cylinder::getHeight()
    {
        return this->height;
    }
    void Cylinder::setHeight(double height)
    {
        this->height=height;
    }

    double Cylinder::getVolume()
    {
        return this->volume=3.14*getRadius()*getRadius()*getHeight();
    }
    void Cylinder::printVolume()
    {
        cout<<"Volume= "<<getVolume()<<endl;;
    }
    void Cylinder::getRadiusHeight()
    {
        cout<<"Enter Radius"<<endl;
        cin>>radius;
        cout<<"Enter Height"<<endl;
        cin>>height;
        setHeight(height);
        setRadius(radius);
    }