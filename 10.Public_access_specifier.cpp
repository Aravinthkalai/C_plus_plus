/*Example 2*/
/*Public access specificier
The variables and functions defined inside the 
public are directly accessibly from anyware from the program
without any restrictions*/
#include<iostream>
using namespace std; 
class student 
{
private:

public:
    string name;
    int age;
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

void test_fun()
{
    student o;
    o.name = "Test name";
    o.age = 28;
    o.display();
}
void test_fun2()
{
    student l;
    l.name = "Test name2";
    l.age = 20;
    l.display();
}
int main()
{
    student o;
    o.name = "Aravinth";
    o.age = 28;
    o.display();   
    test_fun(); 
    test_fun2(); 
}

/*
Output:
Name : Aravinth
Age : 28
Name : Test name
Age : 28
Name : Test name2
Age : 20
*/
