/*Example 1*/
/* copy Constructor
instead of passing variable as paramerter if we pass a object as paramter then
it is called copy constructor 
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
    // math o(10,20);
    // math o1(o);
    math o(10,20);
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
