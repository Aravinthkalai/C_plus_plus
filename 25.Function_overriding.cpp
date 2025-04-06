/*
Function overriding
Example 1
Using function overridding we can redefine
a existing function in base class 
means compiler will overwrite the add()

if we want to really access base class' add()
then we cam use :: operator


*/
#include<iostream>
using namespace std;
class base
{
    protected:
        int a,b;
    public:
        void add()
        {
            cout<<"Enter 2 nos:"<<endl;
            cin>>a>>b;
            cout<<"Total : "<<a+b;
        }
  
};
class derived:public base
{
    private:
        int x;
    public:
        void add()
        {
            cout<<"Enter 3 nos:"<<endl;
            cin>>a>>b>>x;
            cout<<"Total : "<<a+b+x<<endl;
            base::add();
        }

};

int main()
{
    derived d;
    d.add();
    return 0;
}

/*
Output:
Enter 3 nos:
20
10
20
Total : 50
Enter 2 nos:
30
30
Total : 60
*/
