/*
base class pointer derived class object
using this we can assign base class pointer with the  adress of derived class 
and in this menthod only base class members is accessible

*/
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
// //Driver code 
// int main() 
// { 

//     bmw o;
//     o.start();
//     o.advancegear();

//     return 0; 
// }
// /*Output
// start car
// Advanced gear
// */

#include<iostream>
using namespace std; 
 
class car //base class
{
    public:
        void start()
        {
            cout<<"start car"<<endl;
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
//Driver code 
int main() 
{ 

    bmw b; // derived class
    car *p = NULL; //base class
    p = &b; //assiging derived class address to base classs
    /*It is only possible to access the base class members 
    derived class members are not permited to access*/
    p->start(); //Okay
    //p->advacegear();// it will through errors

    return 0; 
}
/*Output
start car
*/