/*
Operator overloading
In C++, when you overload an operator as a member function, the object on the left side 
of the operator (c1) is the calling object (this) (means if we use this-> or
whithout this-> also we will always get c1 contents) and the object on the right side (c2) is always a 
parameter to the function.

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
        cout<<"real "<< real<< " imag "<< img<<endl;
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