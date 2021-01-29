#include <iostream>
#include <bits/stdc++.h>

using namespace std;

static bool shuffleCheck(string first, string second,string result)
{
    if (first.length() + second.length()!= result.length())
        return false;
    int i=0,j=0,k=0;

    while(k!=result.length()){
        if(i<first.length() and first[i]==result[k])
            i++;
        else if (j<second.length() and second[j]==result[k])
            j++;
        else{
            return false;
        }
        k++;
    }
    if(i<first.length() or j<second.length())
        return false;
    return true;
}

int main()
{
    string first="XY";
    string second = "12";
   // string result="1YX2";// invalid since the order is incorrect
    string result="1XY2";
    if(shuffleCheck(first,second,result)==true)
        cout<<result<<" is a valid shuffle of "<<first<<" and "<<second;
    else
        cout<<result<<" is a not valid shuffle of "<<first<<" and "<<second;
    return 0;
}
