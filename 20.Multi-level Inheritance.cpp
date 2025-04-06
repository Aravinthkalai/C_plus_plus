/*
Multilevel Inheritance
In multilevel inheritance, a class is derived from another derived class. 
This inheritance can have as many levels as long as our implementation. 
In the below code, class C is derived from Class B. Class B is in turn derived from class A.
*/

#include<iostream>
using namespace std;

class grandfather
{
    public:
        void land()
        {
            cout<<"Have 5arcs land."<<endl;
        }
};
class father:public grandfather
{
    public:
        void house()
        {
            cout<<"Have own 2BHK House."<<endl;
        }
};

/*son having a all the public properites of father 
and father alreay owned the public property of 
grandfather so son can easily access grandfather property
using father 
*/
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
    o.land();
    return 0;
}
/*
Output:
Have own 2BHK House.
Have own Audi car
Have 5arcs land.
*/