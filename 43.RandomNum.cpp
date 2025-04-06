#include<iostream>

using namespace std;

void rannum()
{
    int random;
    for(int i=0; i<3;i++)
    {
        random = rand();
        cout<<random<<endl;
    }
}

int main()
{
    rannum();
    return 0;
}
/*Output
41
18467
6334
*/