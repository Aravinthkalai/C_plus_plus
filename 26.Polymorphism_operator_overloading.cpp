/*
Polymorphism
Example 1 
Operator overloading
Using function overridding we can redefine
a existing function in base class
syntax:
returnType operator symbol(parameters) { 

*/
#include<iostream>
using namespace std;

class sample
{
public:
    void operator -()
    {
        cout<<"unary / minus operator overloading called"<<endl;
    }
    void operator +()
    {
        cout<<"Plus / addition operator overloading called"<<endl;
    }
    void operator !()
    {
        cout<<"Exclamatory operator overloading called"<<endl;
    }
    void operator *()
    {
        cout<<"Muliply operator overloading called"<<endl;
    }
};

int main()
{
    sample s;
    -s;
    +s;
    !s;
    *s;
    return 0;
}

/*
Output:
unary / minus operator overloading called
Plus / addition operator overloading called
Exclamatory operator overloading called
Muliply operator overloading called
*/
