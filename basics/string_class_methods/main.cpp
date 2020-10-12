/*
methods:

~ assign()
~ append()
~ insert()
~ replace() -> replace(from_index, length, replace_by)
~ erase()
~ find() -> returns (first occurrence)index from where it starts, else -1
~ rfind() -> finds from end to beginning
~ compare() -> if s1>s2 : -1; if s1=s2 :0; if s1<s2 : 1
~ c_str()
~ size()

*/

#include <iostream>
#include <string>
#include<string.h>
using namespace std;

int main()
{
    string s1;
    s1.assign("Hello");
    string s2="Hi";

    cout<<"s1: "<<s1<<endl;

    s1.append(" Students");
    cout<<"s1: "<<s1<<endl;

    s1.insert(2,"123");
    cout<<"s1: "<<s1<<endl;

    s1.replace(2,2,"A"); // from index 2 '1' , length 2, i.i '12' replaced by 'A'
    cout<<"s1: "<<s1<<endl;

    int i= s1.find("Stud");
    cout<<i<<endl;

    int j= s1.rfind("e");
    cout<<j<<endl;

    int k = s1.compare(s2);
    cout<<k<<endl;

    char str[20];
    strcpy(str,s2.c_str());
    cout<<str<<endl;

    cout<<"size of s1:"<<s1.size()<<endl;

    s1.erase();
    cout<<"s1: "<<s1<<endl;

    return 0;
}
