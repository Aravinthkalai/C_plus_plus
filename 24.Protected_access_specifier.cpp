/*
Protected access specifier
Example 1
Protected variables will be accessible by 
its own class and inherited class but 
it is not accessible by main function directly
                        public      private      Protected
inside own class          Yes        Yes         Yes
outside class (main)      Yes        No          No
inherited class           Yes        No          Yes

*/
#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
  
};
class B:public A
{
    public: 
    void getDetails()
    {
        cout<<"Enter the value of x :"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<"X : "<<x<<endl; 
    }
};

int main()
{
    B o;
    o.getDetails();
    o.display();
    return 0;
}

/*
Output:

*/
