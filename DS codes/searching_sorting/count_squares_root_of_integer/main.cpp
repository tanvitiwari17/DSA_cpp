#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int x = sqrt(N);

        if(x*x==N)
        return x-1;


    return x;}
};

int main(){
int n;
cin>>n;
Solution ob;
cout<<ob.countSquares(n)<<endl;
return 0;
}
