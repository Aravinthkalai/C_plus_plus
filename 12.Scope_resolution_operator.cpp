/*Example 2*/
/*Scope resolution operator
Scope resolution operatot is used to access the identifiers
such as variable names and function names defined inside some 
other scope in the current scope.*/
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
80
90
85
Name : Aravinth
M1   : 80
M2   : 90
M3   : 85
Total : 255
Average : 85
*/
