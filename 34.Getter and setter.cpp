/* Getter and setter function
Private variable is not directly accessible so we can
write a get and set functions to read/write the variables
this keyword is used to access the members in a object
*/
#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int age;  
    public:
        student(string n, int a)
        {
            name = n;
            age = a;
            /*The following will be the same as above statement */
            this->name = n;
            this->age = a;
        }
        void printDetails()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
        string Getname()
        {
            return this->name;
        }
        void setname(string n)
        {
            this->name = n;
        }
};

int main()
{
    student s("Aravinth", 28);
    /*name is a private variable so we can't directly modify 
    so we can write get and function*/
    //s.name = "Kalai";
    s.printDetails();
    s.setname("Kalai");
    cout <<s.Getname()<<endl;

    return 0;
}