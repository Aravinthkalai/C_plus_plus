/*STL - vector in c++  */
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>a;
    cout<<"capacity : "<<a.capacity()<<endl;
    a.push_back(10);
    cout<<"capacity : "<<a.capacity()<<endl;
    a.push_back(20);
    cout<<"capacity : "<<a.capacity()<<endl;
    a.push_back(30);
    cout<<"capacity : "<<a.capacity()<<endl;
    a.push_back(40);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Vector First Element : "<<a.front()<<endl;
    cout<<"Vector Last Element : "<<a.back()<<endl;
    cout<<"Before pop "<<endl;
    for(int x:a){cout<<" "<<x;}
    a.pop_back();
    cout<<endl<<"After pop "<<endl;
    for(int x:a){cout<<" "<<x;}
    cout<<endl<<"Before clear size : "<<a.size()<<endl;
    a.clear();
    cout<<"After clear size : "<<a.size()<<endl;
    /*clears only element not a memory space so 
    we will get 4*/
    cout<<"After capacity : "<<a.capacity()<<endl;
    /*b vector with  index, all contains value as 10*/
    vector<int>b(5,10);
    cout<<"B : ";
    for(int x:b){cout<<" "<<x;}
    /*passing vector b to c vector so c vector
    also get updated as like b*/
    vector<int>c(b);
    cout<<endl<<"C : "<<endl;
    for(int x:c){cout<<" "<<x;}
    cout<<endl;
    for(auto i =c.begin();i!=c.end();i++)
    {
        cout<<*i<<" ";
    }
    vector<int>d(5,20);
    cout<<endl<<"before swap C : "<<endl;
    for(int x:c){cout<<" "<<x;}
    cout<<endl;

    cout<<endl<<"before swap D : "<<endl;
    for(int x:d){cout<<" "<<x;}
    cout<<endl;

    c.swap(d);
    
    cout<<endl<<"After swap C : "<<endl;
    for(int x:c){cout<<" "<<x;}
    cout<<endl;

    cout<<endl<<"After swap D : "<<endl;
    for(int x:d){cout<<" "<<x;}
    cout<<endl;
    return 0;
}
/*Output
capacity : 0
capacity : 1
capacity : 2
capacity : 4
Size : 4
Vector First Element : 10
Vector Last Element : 40
Before pop
 10 20 30 40
After pop
 10 20 30
Before clear size : 3
After clear size : 0
After capacity : 4
B :  10 10 10 10 10
C :
 10 10 10 10 10
10 10 10 10 10
before swap C :
 10 10 10 10 10

before swap D :
 20 20 20 20 20

After swap C :
 20 20 20 20 20

After swap D :
 10 10 10 10 10
*/