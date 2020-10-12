/*
map:
- maps are used to replicate associative arrays
    numeric arrays: indexes are numeric(0,1,2,3..)
    associative arrays: meaningful indexes (keys)

- contain sorted key-value pair,in which each key is unique and cannot be changed,
  and it can be inserted or deleted but cannot be altered.

- value associated with keys can be altered.
- map always arranges its keys in sorted order

map <data_type_of_key,d_type_of_value> obj1;
map <data_type_of_key,d_type_of_value> obj1{{..},{..}};

functions:
~ at()
~ []
~ size()
~ empty() - returns 0 if empty, 1 otherwise
~ insert()
~ clear()

*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int,string> customer;
    customer[100]="Gyan";
    customer[123]="Vinay";
    customer[145]="Aditya";
    customer[171]="Sahil";
    customer[200]="Raj";

    map<int,string> c{{100,"Gaj"},{123,"Ashish"},{145,"Rajni"},{171,"Niel"},{200,"Yukti"}};

    cout<<customer[100]<<endl;

    map <int,string>:: iterator p = customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }

    cout<<c.at(145)<<endl;
    cout<<"size of customers: "<<customer.size()<<endl;

  //  customer.insert(205,"Dilip"); incorrect, we need to pass a pair
    customer.insert(pair<int,string>(205,"Dilip"));
    cout<<customer[205];
    return 0;
}
