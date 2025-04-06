/*Example 2*/
/*Class syntax
class class_name
{
    private:
        private variables and functions
    public:
        Public variables and functions
    protected:
        
};

class is like factory object is like a product
factory can produce n numeber of idential products
similary using class it is possible to create n number
of idential objects 
Products are used by different customers
objects are used by different applications
*/
#include<iostream>
using namespace std; 
class circle 
{
private:
// private variables only accessible by class members
    float radius;
public:
    float area()
    {
        cout<<"Enter radius : "<<endl;
        cin>>radius;
        return (3.14*(radius*radius));
    }
    float circumference()
    {
       // c=2*PI*R
       return (2*3.14*radius);
    }
};

int main()
{
    circle o;
    /*Private variables only accessible by class members out side of
    class it is not possible to access the only way to  read/write the
    variable by calling a public function of class
    Private variable scope and visibility with in the class*/
    //o.radius = 20;
    cout<<"Area of circle is : "<<o.area()<<endl;
    /*since radius variable is already updated above no need to pass 
    radius again beacuse the variable radius behave like a static variable
    once it is updated inside the class then it will retain the value */
    cout<<"circumference of circle : "<<o.circumference()<<endl;

}
/*
Output:
Area of circle is : Enter radius : 
10
314
circumference of circle : 62.8
*/
