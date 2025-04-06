/*STL - stack in c++ FILO */
#include<iostream>
#include<stack>
using namespace std;

void print(stack <int>x)
{
    while(!x.empty())
    {
        cout<< " "<<x.top();
        x.pop();
    }

    cout<<endl;
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"stack Empty or not : "<<s.empty()<<endl;
    cout<<"Stack Size : "<<s.size()<<endl;  
    print(s);
    s.pop();
    print(s);
    return 0;
}
/*Output
stack Empty or not : 0
Stack Size : 4
 40 30 20 10
 30 20 10
*/