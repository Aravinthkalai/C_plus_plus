/*Example 1*/
/* Parameterized Constructor
Working is same as default constructor but while creating object 
if we pass some paramteres then it is called parameterized constructor
default constructor will initialize with whatever value is feed inside 
the constructor function but paramterized constructor it is possible to 
upadte the variables by passing paramters
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
            cout<<"Constructor called"<<endl;
            a=x;
            b=y;
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
    o.add();
}

/*
Output:
Constructor called
Total : 30
*/
