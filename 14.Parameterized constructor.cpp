/*Example 1*/
/* Parameterized Constructor
Working is the same as a default constructor, but when creating an object, if we pass some parameters, 
it is called a parameterized constructor.A default constructor initializes the object with default values 
provided inside the constructor function, whereas a parameterized constructor allows updating the variables 
by passing parameters.
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
