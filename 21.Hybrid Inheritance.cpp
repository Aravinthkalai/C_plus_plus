/*
Hybrid inheritance ce
Hybrid inheritance is usually a combination of more than one type of inheritance.
*/

#include<iostream>
using namespace std;
/*grandfather and father are combined together it is single inheritance 
mother is seperate class
son is accessing both mother and father since father alreay having 
the property of grandfather, so father and grandfather called single 
inheritance and combined all together called hybrid inheritance
*/
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

class mother
{
    public:
        void gold()
        {
            cout<<"Have 2KG gold."<<endl;
        }
};
class son:public father,public mother
{
    public:
    void car()
    {
        cout<<"Audi Car."<<endl;
    }
};

int main()
{
    son o;
    o.house();
    o.gold();
    o.car();
    o.land();
    return 0;
}
/*
Output:
Have own 2BHK House.
Have 2KG gold.
Audi Car.
Have 5arcs land.
*/