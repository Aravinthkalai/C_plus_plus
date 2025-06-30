/*
Base class pointer derived class object
A base class pointer can point to a derived class object. 
But it won’t call the derived class methods (with the same method name) 
unless the base class methods are marked as virtual

*/
// Example 1: Base class pointer derived class object

// #include<iostream>
// using namespace std; 
 
// class car //base class
// {
//     public:
//         void start()
//         {
//             cout<<"start car"<<endl;
//         }

// };
// class bmw:public car // derived class
// {
//     public:
//         void advancegear()
//         {
//             cout<<"Advanced gear"<<endl;
//         }

// };

// int main() 
// { 

//     bmw b; // derived class
//     car *p = NULL; //base class
//     p = &b; //assiging derived class address to base classs
//     /*It is only possible to access the base class members 
//     derived class members are not permited to access*/
//     p->start(); //Okay
//     //p->advacegear();// it will through errors

//     return 0; 
// }
// /*Output
// start car
// */

// Example 2: Accessing derived class member
#include<iostream>
using namespace std; 
 
class car //base class
{
    public:
        void start()
        {
            cout<<"start car"<<endl;
        }
        virtual void advancegear()
        {
            
        }

};
class bmw:public car // derived class
{
    public:
        void advancegear()
        {
            cout<<"Advanced gear"<<endl;
        }

};

int main() 
{ 

    bmw b; // derived class
    car *p = NULL; //base class
    p = &b; //assiging derived class address to base classs
    /*It is only possible to access the base class members 
    derived class members are not permited to access*/
    p->start(); //Okay
    p->advancegear();// Okay because advancegear is declared as virtual

    return 0; 
}
/*Output
start car
Advanced gear
*/

// Example 3: 
// Use case: The virtual keyword enables runtime polymorphism.
// At runtime, it calls the appropriate function based on the actual object.

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     virtual void draw() {   // virtual function for polymorphism
//         cout << "Drawing a shape" << endl;
//     }
// };

// class Circle : public Shape {
// public:
//     void draw() {
//         cout << "Drawing a circle" << endl;
//     }
// };

// class Rectangle : public Shape {
// public:
//     void draw() {
//         cout << "Drawing a rectangle" << endl;
//     }
// };

// int main() {
//     Shape* shapes[2];  // array of base class pointers

//     Circle c;
//     Rectangle r;

//     shapes[0] = &c;  // base pointer points to Circle object
//     shapes[1] = &r;  // base pointer points to Rectangle object

//     for (int i = 0; i < 2; i++) {
//         shapes[i]->draw();  // calls the correct draw() based on actual object
//     }

//     return 0;
// }

/*Output
Drawing a circle
Drawing a rectangle

*/