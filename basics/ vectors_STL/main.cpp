/*

Vector:
- most general purpose container
- supports dynamic array
- provides memory flexibility, unlike arrays.
- does not need size during declaration.

vector <data_type> obj1; -> blank vector // by default capacity =1
vector <data_type> obj2(n); -> vector of a length n
vector <char> obj3(5,'a') -> vector of capacity 5 ,all initialized as 'a'

~ []          -> used to access vector
~ push_back() -> adds value in the end
~ capacity()  -> returns capacity of vector
~ pop_back()  -> removes last element
~ size()      -> returns number of elements currently in vector
~ clear()     -> removes all elements from the vector
~ at()        -> returns i-th index in vector
~ front()     ->returns first element of the vector
~ back()      -> returns last element of the vector

 ==  !=  >  <  >=  <=  : to compare two vectors

*/

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int>v1;
    vector <int> v2{10,20,30,40}; // initialized with 3 values, cap=3
    vector <int> v3;
    vector <char> v4(4,'a');

    cout<<v4[0]<<" "<<v4[1]<<" "<<v4[2]<<" "<<v4[3]<<endl;
    for(int i =0;i<=3;i++)
     cout<<v2[i]<<endl;

    cout<<"curr capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(1);
    cout<<"curr capacity of v1 (after pushing 1): "<<v1.capacity()<<endl;
    v1.push_back(2);
    cout<<"curr capacity of v1 (after pushing 2): "<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<"curr capacity of v1 (after pushing 3): "<<v1.capacity()<<endl;


    cout<<"curr capacity of v3: "<<v3.capacity()<<endl;
    for(int i = 0;i < 10;i++)
        v3.push_back(10*(i+1));
    cout<<"curr capacity of v3: "<<v3.capacity()<<endl;
    v3.pop_back();
    cout<<"after popping 1 time, capacity of v3: "<<v3.capacity()<<endl;
    v3.pop_back();
    cout<<"after popping 2 times, capacity of v3: "<<v3.capacity()<<endl;
    //although only cap of 8 is required but once capacity has been increased, it does not reduce according to pops.

    cout<<"size of v3: "<<v3.size()<<endl;
    for (int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";

    v1.clear();
    cout<<endl<<"capacity of v1: "<<v1.capacity()<<endl;
    cout<<"size of v1: "<<v1.size()<<endl;

    cout<<"element at index 3 of v3: "<<v3.at(3)<<endl;

    cout<<"first value of v3: "<<v3.front()<<endl;

    cout<<"last value of v3: "<<v3.back()<<endl;

    // using iterator to insert a value at a particular index in a vector
    vector <int> :: iterator it = v3.begin();
        v3.insert(it+3,35);

    for (int i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";


    return 0;
}
