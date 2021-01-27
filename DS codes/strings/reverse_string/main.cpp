#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse_string(vector <char>& s)
{
    char temp ;
    int n = s.size();
    for(int i=0;i<n/2;i++)
    {
        temp = s[i];
        s[i]=s[n-i-1];
        s[n-i-1]= temp;
    }

    for (int i =0;i<n;i++)
    {
        cout<<s[i]<<",";
    }
}

