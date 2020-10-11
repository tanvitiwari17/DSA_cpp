/*
List:
- list class supports a bidirectional,linear list.
- vector supports random access but a list can be accessed sequentially only.
- List can be accessed front to back or back to front.

functions:
~ sort()
~ size()
~ push_back()
~ push_front()
~ pop_back()
~ pop_front()
~ reverse()
~ remove() : to remove particular value
~ clear()

*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> l1{1,2,3,4,5};
    list <string> l2{"India","Japan","USA"};
    list <int>l3{18,2,35,20,1,23,19};
    // cout<<l1[0]; does not work here

    l2.push_back("Oman");
    l2.push_front("UK");

    list <string> :: iterator p=l2.begin();
    while(p!=l2.end()){
        cout<<*p<<" ";
        p++;
        }

    cout<<endl<<"Total values in the list, l2 are: "<<l2.size()<<endl;

    l1.pop_back();
    l1.pop_front();
    l1.clear();
    list <int> :: iterator q=l1.begin();
    while(q!=l1.end()){
        cout<<*q<<" ";
        q++;
        }
    cout<<endl;

    l3.sort();
    l3.reverse();
    l3.remove(20);
    list <int> :: iterator z=l3.begin();
    while(z!=l3.end()){
        cout<<*z<<" ";
        z++;
        }



    return 0;
}
