/*
Split the binary string into substrings with
equal number of 0s and 1s
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubstr(string s, int n)
{
    int count0 =0, count1=0;
    int cnt=0;
    for(int i =0;i<n;i++)
    {
        if(s[i]=='0')
            count0++;
        else
            count1++;

        if (count0==count1)
            cnt++;
    }
    if(count0!=count1)
        return -1;

    return cnt;
}
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int n;
    n=s.length();
    cout<<maxSubstr(s,n);
    return 0;
}
