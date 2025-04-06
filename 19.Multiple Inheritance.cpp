/*
Single Inheritance
Multiple Inheritance
Multiple inheritance is a type of inheritance 
in which a class derives from more than one classes. 
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

class mother
{
    public:
        void gold()
        {
            cout<<"Have 1kg gold "<<endl;
        }
};
/*son having a all the public properites of father and 
nother so son can access house(), gold() directly
syntax class class_name: public deriverd_class_name, public deriverd_class_name2*/
class son:public father, public mother
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
    o.gold();
    o.car();
    return 0;
}
/*
Output:
Have own 2BHK House.
Have 1kg gold 
Have own Audi car
*/