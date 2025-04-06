// /*Write a file using c++ fstream*/
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     /*Appends new conetents into the file*/
//    // ofstream o("test.txt", ios::app);
//    /*Remove the old content and adds the new contents*/
//     ofstream o("test.txt", ios::trunc);
//     o<<"Aravinth K"<<endl;
//     o<<"Erode"<<endl;
//     o<<"9003340750"<<endl;
//     o.close();
//     return 0;
// }

/*Reading  a file using c++ fstream*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string mystring;
    ifstream MyReadFile("test.txt");
    while(getline(MyReadFile, mystring))
    {
        cout<<mystring<<endl;
    }
    MyReadFile.close();
    return 0;
}
/*Output
Aravinth K
Erode     
9003340750
*/