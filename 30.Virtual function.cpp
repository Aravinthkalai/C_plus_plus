// /*
// Virtual function
// */
// #include<iostream>
// using namespace std; 
 
// class base 
// {
//     public:
//         void show()
//         {
//             cout<<"Base class"<<endl;
//         }
// };
// class derived1:public base // derived1 class
// {
//     public:
//         void show()
//         {
//             cout<<"Show from deriverd1"<<endl;
//         }

// };
// class derived2:public base // derived2 class
// {
//     public:
//         void show()
//         {
//             cout<<"Show from deriverd2"<<endl;
//         }

// };
// //Driver code 
// int main() 
// { 

//     base *b = NULL;
//     derived1 d1;
//     derived1 d2;
//     b = &d1;
// If the keyword virtual is mentioned before the function,
// then the function will be physically present but we can't
// access or use the derived class version in this line b = &d1;
// even though the address of derived1 is assigned, it still accesses the base class's
// show(). To make the base class's show() inactive, we should
// place the virtual keyword.
//     b->show();
//     b = &d2;
//     b->show();

//     return 0; 
// }
// /*Output
// Base class
// Base class
// */

/*
Example 2: 

Purpose: A virtual function ensures the required function
is redeclared in the derived class. If not defined, the virtual
function will execute directly.
For example, if show() is not defined in either derived1 or derived2,
then the compiler will automatically execute the base class's
virtual function, which is base::show().

*/
#include<iostream>
using namespace std; 
 
class base 
{
    public:
        virtual void show()
        {
            cout<<"Base class"<<endl;
        }
};
class derived1:public base // derived1 class
{
    public:
        void show()
        {
            cout<<"Show from deriverd1"<<endl;
        }

};
class derived2:public base // derived2 class
{
    public:
        void show()
        {
            cout<<"Show from deriverd2"<<endl;
        }

};
//Driver code 
int main() 
{ 

    base *b = NULL;
    derived1 d1;
    derived2 d2;
    b = &d1;
    // if virtual is not mentioned then it will automatically calls
    //the base::show()
    b->show(); 
    b = &d2;
    b->show();

    return 0; 
}
/*Output
Show from deriverd1
Show from deriverd2
*/