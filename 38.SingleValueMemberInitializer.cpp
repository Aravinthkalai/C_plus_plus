// /*
// Single Value Member Initializer list in c++
// It will initalize member variables instead of assigining it
// */
// #include<iostream>
// using namespace std;

// class base
// {
//     private:
//         int x,y;
//     public:
//         base(int a, int b):x(a),y(b)
//         {
//         }
//         void print()
//         {
//             cout<<"X : "<<x<<endl;
//             cout<<"Y : "<<y<<endl;
//         }
// };
// int main()
// {
//     base o(25,35);
//     o.print();
//     return 0;
// }
// /*Output
// X : 25
// Y : 35
// */

// /*
// Example 2: initializing base class variable 
// through derived class
// */
// #include<iostream>
// using namespace std;

// class base
// {
//     private:
//         int x;
//     public:
//         base(int a):x(a)
//         {
//             cout<<"X : "<<x<<endl;
//         }
//         // void print()
//         // {

//         // }
// };

// class derived:public base
// {
//     private:
//         int y;
//     public:
//         derived(int a, int b):base(a),y(b)
//         {
//             cout<<"Y : "<<y<<endl;
//         }
// };

// int main()
// {
//     derived o(25,30);
//     return 0;
// }
// /*Output
// X : 25
// Y : 30
// */

// /*
// Example 2: initializing constant using member 
// initializer
// */
// #include<iostream>
// using namespace std;

// class base
// {
//     private:
//         const int x;
//     public:
//         base(int a):x(a)
//         {
//             /*The below line will through error since x is 
//             a constant, so constant can't be assigned only 
//             initialization is possible
//             */
//             //x = a;
//             cout<<"X : "<<x<<endl;
//         }
// };


// int main()
// {
//     base o(30);
//     return 0;
// }
// /*Output
// X : 30
// */

// /*
// Example 3: Solution for same name issue
// if constructor parameter and member name both 
// are same then it won't work properly for this 
// either we have to use this-> or initializer

// */
// #include<iostream>
// using namespace std;

// class base
// {
//     private:
//         string name;
//         int x;
//     public:
//         /*Some time the belwo mentioned constructor
//          will give wrong output due to same name*/
//         // base(string name, int x)
//         // {
//         //     name = name;
//         //     x = x;
//         //     cout<<"name : "<<name<<endl;
//         //     cout<<"X : "<<x<<endl;
//         // }
//         /*To solve this either use this-> or member initializer*/
//         // base(string name, int x)
//         // {
//         //     this->name = name;
//         //     this->x = x;
//         //     cout<<"name : "<<name<<endl;
//         //     cout<<"X : "<<x<<endl;
//         // }
        
//         /*if we are using member initializer then no need to 
//         worry about same naming */
//         base(string name, int x):name(name),x(x)
//         {
//             cout<<"name : "<<name<<endl;
//             cout<<"X : "<<x<<endl;
//         }
// };


// int main()
// {
//     base o("Aravinth K", 30);
//     return 0;
// }
// /*Output
// name : Aravinth K
// X : 30
// */


/*
Example 4: Narrowing conversion problem in member initializer
if user passes int value for a char member then it won't initialize
properly so we will get wrong output eventhough if we type cast it 
so atleast we need a warning stating that narrowing conversion, to
get the warning we have to use {} instead of ()
*/
#include<iostream>
using namespace std;

class base
{
    private:
        char x;
    public:
        base(int a):x{a}
        {
            cout<<"X : "<<(int)x<<endl;
        }

};


int main()
{
    base o(750);
    return 0;
}
/*Output
.\SingleValueMemberInitializer.cpp: In constructor 'base::base(int)':
.\SingleValueMemberInitializer.cpp:179:24: warning: narrowing conversion of 'a' from 'int' to 'char' inside { }
 [-Wnarrowing]
         base(int a):x{a}
                        ^
PS D:\Study materials\C++> .\singlevalue.exe
X : -18
*/