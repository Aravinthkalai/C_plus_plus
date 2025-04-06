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
Virtual function
if keyword virtula is mentioned before the is_function
then the function will be physically present but we can't
access or use it so in this line b = &d1; eventhough address
of derived1 is assigned it sill access the base class's 
show() to make the base class's show() as inactive we should 
place the virtual keyword 

Purpose: virtual function ensures the required function 
is redeclared in the derived class, if not defined the virtual 
function will directly execute
eg: if show() is not defined in any the derived 1 or derived2 
class then compiler will automatically executes the base class's
virtual function
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
    b->show();
    b = &d2;
    b->show();

    return 0; 
}
/*Output
Show from deriverd1
Show from deriverd2
*/