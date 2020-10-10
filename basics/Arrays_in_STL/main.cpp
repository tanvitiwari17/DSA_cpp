/*
Array is a linear collection of similar elements.
Array container in STL provides us the implementation of static array
Use header array -
#include<array>

array <data_type, array_size> object_name;

functions:
-at()   : returns value in array at the given range.
-front(): returns the first element in the array.
-back() : returns the last element in the array.
-fill() : assigns the given value to every element of the array.
-swap() : swaps the content of two arrays of same type and size
-size() : returns the number of element present in the array.
-begin(): returns the iterator pointing to the first element of the array.
-end()  : returns an iterator pointing to the element next to the last element of the array.

*/

#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> data_array1={1,2,5,4,3};
    array <int,5> data_array2={11,22,33,44,55};
    cout<<data_array1.at(2)<<endl; //cout<<data_array[3] is also allowed
    cout<<data_array1.front()<<endl;
    cout<<data_array1.back()<<endl;
    cout<<"size is: "<<data_array1.size()<<endl;

    data_array1.swap(data_array2);
    //data_array.fill(10);
    cout<<"array 1: ";
    for (int i=0;i<5;i++)
        cout<<data_array1[i]<<" ";
    cout<<endl<<"array 2: ";
    for (int i=0;i<5;i++)
        cout<<data_array2[i]<<" ";

    return 0;
}
