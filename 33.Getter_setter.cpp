/*
Getter and setter functions 
*/
#include<iostream>
using namespace std; 

class bank
{
    public:
        virtual void debit_credit() = 0;
};
class hdfc:public bank
{
    public:
        void debit_credit()
        {
            cout<<"HDFC bank debit and credit"<<endl;
        }
};
class IB:public bank
{
    public:
        void debit_credit()
        {
            cout<<"IB debit and credit"<<endl;
        }
};

//Driver code 
int main() 
{ 
    bank *o = new hdfc();
    o->debit_credit();
    return 0; 
}
/*Output
HDFC bank debit and credit
*/