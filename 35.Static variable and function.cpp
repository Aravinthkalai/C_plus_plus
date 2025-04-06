/* Staic variable and functions
*/
#include<iostream>
using namespace std;
class student
{
    private:
        string name;
        int age; 
        static int count; 
    public:
        student(string n, int a)
        {
            name = n;
            age = a;
            /*The following will be the same as above statement */
            this->name = n;
            this->age = a;
            count++;
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
        static int getCount()
        {
            return count;
        }
};
/*we can't initialize static varaiable inside class 
it should be initialized out side of class like below */
int student::count=0;
int main()
{
    student s1("Aravinth", 28);
    student s2("kalai", 56);
    student s3("Amutha", 47);

    s1.printDetails();
    s2.printDetails();
    s3.printDetails();
    /*Static functions are directly accessible using :: operator*/
    cout <<"Total Students: "<<student::getCount()<<endl;
    /*The below code will fail*/
    //cout<<"Test access getname : "<<student::Getname()<<endl;

    return 0;
}