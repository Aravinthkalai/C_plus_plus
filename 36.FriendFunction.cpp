/*
Friend function
*/

// #include<iostream>
// using namespace std;

// class A
// {
//     private:
//         int x,y;
//     public:
//         void setData()
//         {
//             x = 20;
//             y = 30;
//             cout<<"X : "<<x<<endl;
//             cout<<"Y : "<<y<<endl;
//         }
// };
// int main()
// {
//     A a;
//     a.setData();

//     return 0;
// }
// /*Output
// X : 20
// Y : 30
// */
#include<iostream>
using namespace std;

class A
{
    private:
        int x,y;
    public:
        friend void setData();
};
void setData()
{
    A a;
    a.x = 20;
    a.y = 30;
    cout<<"X : "<<a.x<<endl;
    cout<<"Y : "<<a.y<<endl;

}
int main()
{
    setData();

    return 0;
}
/*Output
X : 20
Y : 30
*/