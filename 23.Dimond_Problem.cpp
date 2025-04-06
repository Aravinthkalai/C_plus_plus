// /*
// Dimond problem 
// Example 1
// */

// #include<iostream>
// using namespace std;
// /*
// class B and C having the property of A
// and Class d having the properthy of B and C
// if we try to access A , it will be confusing 
// whether I have to access A through B or C
// */
// class A
// {
// public:

//     void display()
//     {
//         cout<<"Display Method in A";
//     }
// };
// class B:public A
// {
//     public:

//     void show()
//     {
//         cout<<"Show Method in B";
//     }
// };
// class C:public A
// {
//     public:


// };
// class D:public B, public C
// {
//     public:

// };
// int main()
// {

//     D d;
//     d.display();
//     return 0;
// }

// /*
// Output:
// request for member 'display' is ambiguous
// */


// /*
// Dimond problem
// Example 2
// */

// #include<iostream>
// using namespace std;
// /*
// To solve ambiguous error we have to use 
// virtual keyword to solve it, the virtual 
// keyword will not allocate memory it will 
// allocate memory only one time 
// */
// class A
// {
// public:

//     void display()
//     {
//         cout<<"Display Method in A";
//     }
// };
// class B:virtual public A
// {
//     public:

//     void show()
//     {
//         cout<<"Show Method in B";
//     }
// };
// class C:virtual public A
// {
//     public:


// };
// class D:public B, public C
// {
//     public:

// };
// int main()
// {

//     D d;
//     d.display();
//     return 0;
// }
// /*
//  Output:
// Display Method in A
// */


// /*
// Dimond problem
// Example 3
// */
// #include<iostream>
// using namespace std;
// /*
// Same above problem explained with constructor
// while creating Object for class D, it will invoke 
// B class, B will invoke A so 1st A is printed
// after invoking A it will go back and invoke B
// so B constructor will be created 
// similar for C class and finally D will be invoked
// */
// class A
// {
// public:
//     A()
//     {
//         cout<<"Constructor A"<<endl;
//     }
// };
// class B:public A
// {
//     public:
//     B()
//     {
//         cout<<"Constructor B"<<endl;
//     }

// };
// class C:public A
// {
//     public:
//     C()
//     {
//         cout<<"Constructor C"<<endl;
//     }

// };
// class D:public B, public C
// {
//     public:
//     D()
//     {
//         cout<<"Constructor D"<<endl;
//     }
// };
// int main()
// {

//     D d;

//     return 0;
// }

// /*
// Output:
// Constructor A
// Constructor B
// Constructor A
// Constructor C
// Constructor D
// */

// /*
// Dimond problem
// Example 4
// The above problem will be solved if we use virtual keyword
// */
#include<iostream>
using namespace std;
//Diamond Problem in C++ Programming
class A
{
public:
    int x;
    A(){ cout<<"Constructing A "<<endl;}
};
class B:virtual public A
{
    public: B(){ cout<<"Constructing B "<<endl;}
};
class C:virtual public A
{
    public: C(){ cout<<"Constructing C"<<endl;}
};
class D:public B,public C
{
   public: D(){ cout<<"Constructing D "<<endl;}
};
int main()
{
    D o;
    o.x=10;
    return 0;
}

/*
Output:
Constructing A 
Constructing B
Constructing C
Constructing D
*/
