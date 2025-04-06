/*Character Classification Function

isalnum
isalpha
isdigit
islower
isupper
isspace
*/
#include<iostream>
#include<cctype>


using namespace std;

int main()
{
    char a[6] = "R@ 1a";
    for(int i=0;i<=5;i++)
    {
        if(isalnum(a[i]))
        {
           cout<<"----------------"<<endl;
            cout<<"Alpha numeric : "<<a[i]<<endl;
        }

        if(isalpha(a[i]))
        {
            cout<<"----------------"<<endl;
            cout<<"Alpha : "<<a[i]<<endl;
        }

        if(isdigit(a[i]))
        {
            cout<<"----------------"<<endl;
            cout<<"Digit : "<<a[i]<<endl;
        }

        if(isupper(a[i]))
        {
            cout<<"----------------"<<endl;
            cout<<"Upper:"<<a[i]<<endl;
        }

        if(islower(a[i]))
        {
            cout<<"----------------"<<endl;
            cout<<"Lower : "<<a[i]<<endl;
        }

    }
    return 0;
}
/*Output
----------------
Alpha numeric : R
----------------
Alpha : R
----------------
Upper:R
----------------
Alpha numeric : 1
----------------
Digit : 1
----------------
Alpha numeric : a
----------------
Alpha : a
----------------
Lower : a
*/