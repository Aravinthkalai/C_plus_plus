/*Example 1*/
/* copy Constructor
Instead of passing individual variables as parameters, we can pass 
an object as a parameter. In such cases, the copy constructor is 
invoked to create a copy of the object.
syntax: ClassName obj2 = obj1;
*/
#include<iostream>
using namespace std; 
class math
{
    private:
        int a,b,c;
    public:
        math(int x, int y)
        {
            cout<<"Constructor 1 called"<<endl;
            a=x;
            b=y;
        }
        math(math &x)
        {
            cout<<"Constructor 2 called"<<endl;
            a = x.a;
            b = x.b;
        }
        void add()
        {
            c= a+b;
            cout<<"Total : "<<c<<endl;

        }
};
int main()
{
    math o(10,20);
    /*A copy constructor is called whenever an object of the class is initialized
    using another object of the same class.
    Additionally, the copy constructor must be defined inside the class under the 
    public access specifier.
    */
    math o1 = o;
    o.add();
    o1.add();
}

/*
Output:
Constructor 1 called
Constructor 2 called
Total : 30
Total : 30
*/
