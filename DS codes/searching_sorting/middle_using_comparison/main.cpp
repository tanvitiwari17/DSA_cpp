#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int middle(int A, int B, int C){
        if((A-B)*(A-C)<0)
        return A;
        else if ((B-A)*(B-C)<0)
        return B;
        else
        return C;
    }
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
   cout<< middle(A,B,C);
   return 0;
}
