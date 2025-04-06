/*
Single Inheritance
In single inheritance, a class derives from one base class only. This means that there is only one subclass that is derived from one superclass.

Class A   -- Base Class/Parent Class / Super Class
  |
Class B   -- Derived Class / Child Class / Sub Class
*/
#include<iostream>
using namespace std;

class father
{
    public:
        void house()
        {
            cout<<"Have own 2BHK House."<<endl;
        }
};
/*son having a all the public properites of father so 
son can access house() directly
syntax class class_name:deriverd_class_name*/
class son:public father
{
    public:
        void car()
        {
            cout<<"Have own Audi car"<<endl;
        }
};
int main()
{
    son o;
    o.house();
    o.car();
    return 0;
}

/*
Output:
Have own 2BHK House.
Have own Audi car
*/