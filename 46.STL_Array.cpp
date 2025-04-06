/*STL array in c++*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5> a = {10,20,30,40,50};
    array <int,5>b = {100,200,300,400,500};
    cout<<"Array Size : "<<a.size()<<endl;
    for(int x:a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"Array at 3rd position value : "<<a.at(3)<<endl;
    cout<<"Array Empty or not : "<<a.empty()<<endl;
    cout<<"Array First element : "<<a.front()<<endl;
    cout<<"Array Last element : "<<a.back()<<endl;
    cout<<"Before swap A:"<<endl;
    for(int x:a){cout<<" "<<x;}
    cout<<endl<<"Before swap B:"<<endl;
    for(int x:b){cout<<" "<<x;}

    a.swap(b);
    
    cout<<endl<<"After swap A:"<<endl;
    for(int x:a){cout<<" "<<x;}
    cout<<endl<<"After swap B:"<<endl;
    for(int x:b){cout<<" "<<x;}

    array <int,5>c;
    c.fill(1);
    cout<<" C "<<endl;
    for(int x:c){cout<<" "<<x;}

    return 0;
}
/*Output
Array Size : 5
 10 20 30 40 50
Array at 3rd position value : 40
Array Empty or not : 0
Array First element : 10
Array Last element : 50
Before swap A:
 10 20 30 40 50
Before swap B:
 100 200 300 400 500
After swap A:
 100 200 300 400 500
After swap B:
 10 20 30 40 50 C
 1 1 1 1 1
*/