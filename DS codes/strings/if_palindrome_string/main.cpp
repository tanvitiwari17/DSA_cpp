#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];
    int flag=0;
    int len;
    cout<<"Enter string: ";
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
            flag=1;
        break;
    }

    if (flag){
    cout << str<<" is not a palindrome!" << endl;
    }
    else
    {
        cout <<str<< " is a palindrome!" << endl;
    }
    return 0;
}
