/*
Power Rangers have to trap a evil spirit monster into a cuboid shape box with dimensions A*B*C, where A, B and C are positive integers. The volume of the box should be exactly X cubic units (that is A*B*C should be equal to X). To allow minimum evil aura to leak from the box the surface area of the box should be minimized. Given X, find the minimum surface area of the optimal box.
Input
The first and the only line of input contains a single integer X.

Constraints:
1 <= X <= 1000000
Output
Print the minimum surface area of the optimal box.

example:
x=125
o/p = 150 (5*5*5)

x=100
o/p= 130(4*5*5)
*/


#include <bits/stdc++.h>
using namespace std;

int pf(vector<int> ans,int n){
	while(n%2==0)
	{
	ans.push_back(2);
	n=n/2;
	}
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		while(n%i==0){
		ans.push_back(i);
		n=n/i;
		}
	}
	if(n>2)
	ans.push_back(n);

	int prod=1,min_sa=0;
	vector <int> arr;

	if(ans.size()>3){
	sort(ans.begin(),ans.end());
	for (int i=0;i<ans.size()-2;i++)
	{
		prod*=ans[i];
	}

	arr.push_back(prod);
	arr.push_back(ans[ans.size()-2]);
	arr.push_back(ans[ans.size()-1]);

	int l=arr[0];
	int b=arr[1];
	int h=arr[2];
	min_sa= 2*((l*b)+(b*h)+(h*l));
	}

	else{
	int l=ans[0];
	int b=ans[1];
	int h=ans[2];
	min_sa= 2*((l*b)+(b*h)+(h*l));
	}

	return min_sa;

}

int main() {
	vector <int> res;
	int n;
	cin>>n;
	cout<<pf(res,n);

	// Your code here
	return 0;
}
