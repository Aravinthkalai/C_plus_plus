/*Example 2*/
/*Scope resolution operator
The scope resolution operator is used to access identifiers, 
such as variable names and function names, defined in another scope from the current scope.*/
#include<iostream>
using namespace std; 
class student 
{
private:
    string name;
    int m1,m2,m3,tot;
    float avg;
public:
// function declaration is mandatory
    void display();
    int public_Test_variable;
    void get_data()
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter 3 marks : "<<endl;
        cin>>m1>>m2>>m3;
    }
};
/*Using scope resolution operator we can write the function outside of class
but function declarion is manadory inside the class
*/
void student::display()
{
    tot = m1+m2+m3;
    avg = tot/3;
    cout<<"Name : "<<name<<endl;
    cout<<"M1   : "<<m1<<endl;
    cout<<"M2   : "<<m2<<endl;
    cout<<"M3   : "<<m3<<endl;
    cout<<"Total : "<<tot<<endl;
    cout<<"Average : "<<avg<<endl;
    cout<<"Before updating the public test variable using :: operator: "<<student::public_Test_variable<<endl;
    student::public_Test_variable = 20;
    cout<<"After updating the public test variable using :: operator: "<<student::public_Test_variable<<endl;

}
int main()
{
    student o;
    o.get_data();
    o.display();   
}

/*
Output:
Enter name : 
Aravinth
Enter 3 marks :
70
80
75
Name : Aravinth
M1   : 70
M2   : 80
M3   : 75
Total : 225
Average : 75
Before updating the public test variable using :: operator: 0
After updating the public test variable using :: operator: 20
*/
