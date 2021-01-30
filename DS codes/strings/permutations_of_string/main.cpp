#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutate(string s,int l,int r)
{
    if(l==r)
    cout<<s<<" ";
    else
    {
        for(int i=l;i<=r;i++)
        {

        swap(s[l],s[i]);
        sort(s.begin()+l+1,s.end());
        permutate(s,l+1,r);
        sort(s.begin()+l+1,s.end());
        swap(s[l],s[i]);

        }
    }
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string s;
        cin>>s;
        int n = s.size();
        sort(s.begin(),s.end());
        permutate(s,0,n-1);
        cout<<endl;
	}

	return 0;
}
