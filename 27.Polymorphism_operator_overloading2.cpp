/*
Operator overloading
In C++, when you overload an operator as a member function, the object on the left side 
of the operator (c1) is the calling object (this) means, and the object on the right side (c2) is passed 
as a parameter to the function.

When you call c1 + c2, the operator + function is called on the c1 object. Inside the operator + function, 
the real and img refer to the real and img members of the c1 object. This is because the function implicitly 
uses the this pointer, which points to the object that called the function (c1 in this case).
*/
 
#include<iostream>
using namespace std; 
 
class complex { 
   private: 
    int real; 
    int img; 
 
   public: 
    //Constructor to initialize real and imag to 0 
    complex() : real(0), img(0) {} 
    complex(int r, int i){real=r;img=i;}
    void print()
    {
        cout<<real<< "+" <<img<<"i"<<endl; 
    }
 
    //Overload the + operator 
    complex operator +(complex c) { 
        complex temp; 
        temp.real = real + c.real; 
        temp.img = img + c.img; 
        return temp;  
    } 
 
}; 
 
//Driver code 
int main() { 
    complex c1(2,5);
    complex c2(3,2);
    complex c3;
    c3 = c1 + c2;  
    c3.print(); 
 
    return 0; 
}
/*Output
5+7i
*/