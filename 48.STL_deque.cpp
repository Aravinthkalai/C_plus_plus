/*STL - deque in c++  */
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d = {10};
    d.push_back(25);
    d.push_front(45); 
    for(int x:d){cout<<" "<<x;}
    cout<<endl<<"Deque Size : "<<d.size()<<endl;
    cout<<"Deque mpty or not : "<<d.empty()<<endl;
    cout<<"Deque at 2nd element value : "<<d.at(2)<<endl;
    cout<<"Before pop :"<<endl;
    for(int x:d){cout<<" "<<x;}
    d.pop_back();
    d.pop_front();
    cout<<endl<<"After pop :"<<endl;
    for(int x:d){cout<<" "<<x;}
    return 0;
}
/*Output
 45 10 25
Deque Size : 3
Deque mpty or not : 0
Deque at 2nd element value : 25
Before pop :
 45 10 25
After pop :
 10
*/