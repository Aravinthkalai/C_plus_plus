/*Example 2*/
/* Default Constructor
Constructor is a member function it has a same name as class name 
this is used to initialize the class members during the object
creation, this function will automatically executed whenever the 
new object is created for a class and it should be written always 
in public access specififer
*/
#include<iostream>
using namespace std; 
class math
{
    private:
        int a,b,c;
    public:
        math()
        {
            cout<<"Constructor called"<<endl;
            a=10;
            b=20;
        }
        void add()
        {
            c= a+b;
            cout<<"Total : "<<c<<endl;

        }
};
int main()
{
    math o;
    math o1;
    o.add();
    o.add();
}

/*
Output:
Constructor called
Constructor called
Total : 30
Total : 30
*/
