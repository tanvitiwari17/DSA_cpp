/*
SMA: Static Memory Allocation
DMA: Dynamic Memory Allocation
eg:
int *p = new int; // to create variable dynamically
float *q = new float;
delete p; // deletes what p is pointing to
delete []p;
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int*p=new int[x];

    return 0;
}
