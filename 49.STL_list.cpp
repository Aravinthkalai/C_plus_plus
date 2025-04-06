/*STL - deque in c++  */
#include<iostream>
#include<list>
using namespace std;

void print(list <int>x)
{
    for(int o:x){cout<< " "<<o;}
    cout<<endl;
}
int main()
{
    list<int>a = {70,20,50,10};
    print(a);
    list<int>b;
    b.push_front(150);
    b.push_front(250);
    b.push_back(350);
    print(b);
    cout<<"list First element : "<<a.front()<<endl;
    cout<<"list Last element : "<<a.back()<<endl;
    cout<<"list Empty or not : "<<a.empty()<<endl;
    cout<<endl<<"Before reverse:"<<endl;
    print(a);
    a.reverse();
    cout<<endl<<"After reverse:"<<endl;
    print(a);

    cout<<endl<<"Before sort:"<<endl;
    print(a);
    a.sort();
    cout<<endl<<"After sort:"<<endl;
    print(a);
  //  cout<<"list at 3rd position value : "<<a.at(3)<<endl;
    return 0;
}
/*Output
 70 20 50 10
 250 150 350
list First element : 70
list Last element : 10
list Empty or not : 0

Before reverse:
 70 20 50 10

After reverse:
 10 50 20 70

Before sort:
 10 50 20 70

After sort:
 10 20 50 70
*/