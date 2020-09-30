// recursive function to check if a given string is palindrome
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool IsPal(char str[], int s, int e)
{
    if (s==e)
        return true; // single character is palindrome
    if (s>e)
        return true;
    if (str[s]!=str[e])
        return false;
    if ( s< e+1)
        return IsPal(str,s+1,e-1);
}

bool IsPalindrome(char str[])
{
    int n= strlen(str);
    if (n==0)
        return true;
    else
        return IsPal(str,0,n-1);

}
int main()
{
    char str[]="naman";
    if(IsPalindrome(str))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
