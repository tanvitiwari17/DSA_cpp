#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n==1)
    {
        cout<<"Move Disc 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move Disc "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}
int main()
{
    TOH(3,'A','C','B');
    return 0;
}
