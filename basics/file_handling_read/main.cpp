/*
fin interpret spaces as delimiters
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("myfile.dat");
   // fin>>ch;
    ch= fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        //fin>>ch;
        ch=fin.get();
    }
    fin.close();
    return 0;
}
