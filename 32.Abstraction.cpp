// #include<iostream>
// using namespace std; 
// /*
// If a class contains atleast one pure virtual function 
// it is called abstraction.
// */
// class bank
// {
//     public:
//         virtual void debit_credit() = 0;
// };
// class hdfc:public bank
// {
//     public:
//         void debit_credit()
//         {
//             cout<<"HDFC bank debit and credit"<<endl;
//         }
// };
// class IB:public bank
// {
//     public:
//         void debit_credit()
//         {
//             cout<<"IB debit and credit"<<endl;
//         }
// };

// //Driver code 
// int main() 
// { 
//     bank *o = new hdfc();
//     o->debit_credit();
//     return 0; 
// }
// /*Output
// HDFC bank debit and credit
// */

#include <iostream>
using namespace std;
class BaseClass //Abstract class
{
public:
virtual void Display1()=0; //Pure virtual function or abstract function
virtual void Display2()=0; //Pure virtual function or abstract function
void Display3()
{
cout<<"\n\tThis is Display3() method of Base Class";
}
};
class DerivedClass : public BaseClass
{
public:
void Display1()
{
cout<<"\n\tThis is Display1() method of Derived Class";
}
void Display2()
{
cout<<"\n\tThis is Display2() method of Derived Class";
}
};
int main()
{
    /* the below line will through error since we can't create object for 
    a abstract class, if one pure virtual function is present inside the
    class then it is called abstract class, so we can only create and access 
    everthing inside base class via derived class
    */
  //  BaseClass b; // error
  
DerivedClass D;
D.Display1(); // This will invoke Display1() method of Derived Class
D.Display2(); // This will invoke Display2() method of Derived Class
D.Display3(); // This will invoke Display3() method of Base Class
return 0;
}
/*
Output

	This is Display1() method of Derived Class
	This is Display2() method of Derived Class
	This is Display3() method of Base Class
*/