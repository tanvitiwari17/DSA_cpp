/*
problem:
Given a rope of length n, you need to find maximum number of pieces you can make such that length of every piece is in set {a,b,c}
for given 3 values.
*/
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int maxCuts(int n,int a,int b,int c)
{
    if (n==0)
        return 0;
    if (n<0)
        return (-1);
    int res= max({maxCuts(n-a,a,b,c), maxCuts(n-b,a,b,c), maxCuts(n-c,a,b,c)});
    if (res==-1)
        return (-1);
    return(res+1);
}
int main()
{
    cout << maxCuts(23,11,9,12)<< endl;
    return 0;
}
