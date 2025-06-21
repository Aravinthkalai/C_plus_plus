/*Example 2*/
/*Private access specificier
The variables and functions defined inside the 
private are only accessibly by within the class members
it is restricted to access from outside of class*/
#include<iostream>
using namespace std; 
class student 
{
private:
    string name;
    int age;
public:
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void get_data()
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter age : "<<endl;
        cin>>age;
    }
};

int main()
{
    student o;
    /*The below two line will give build errors
    since it is not directly accessible*/
    // o.name = "Aravinth";
    // o.age = 25;
    o.get_data();
    o.display();   
}

/*
Output:
Enter name : 
Aravinth
Enter age : 
28
Name : Aravinth
Age : 28
*/
