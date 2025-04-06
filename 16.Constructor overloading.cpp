/*Example 1*/
/* constructor overloading
It is same as function overloading based on the 
available paramter and data type it will be called while 
performing object creations\
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
            a = 0;
            b = 0;
            cout<<"Constructor 1 called"<<endl;
        }
        math(int x, int y)
        {
            cout<<"Constructor 2 called"<<endl;
            a=x;
            b=y;
        }
        math(math &x)
        {
            cout<<"Constructor 3 called"<<endl;
            a = x.a;
            b = x.b;
        }
        void add()
        {
            c = a+b;
            cout<<"Total : "<<c<<endl;

        }
};
int main()
{
    math o1;
    math o2(10,20);
    math o3(o2);

    o1.add();
    o2.add();
    o3.add();
}

/*
Output:
Constructor 1 called
Constructor 2 called
Constructor 3 called
Total : 0
Total : 30
Total : 30
*/
