/*STL - queue in c++ FIFO */
#include<iostream>
#include<queue>
using namespace std;

void print(queue <string>x)
{
    while(!x.empty())
    {
        cout<< " "<<x.front();
        x.pop();
    }

    cout<<endl;
}
int main()
{
    queue<string>s;
    s.push("C");
    s.push("C++");
    s.push("Java");
    s.push("python"); 
    print(s);
    cout<<"Queues Empty or not : "<<s.empty()<<endl;
    cout<<"Queues First element : "<<s.front()<<endl;
    cout<<"Queues Last element : "<<s.back()<<endl;
    s.pop();
    cout<<"Queues First element : "<<s.front()<<endl;

    return 0;
}
/*Output

*/