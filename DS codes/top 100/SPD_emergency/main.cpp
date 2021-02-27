/*
Our five power rangers have powers P1, P2, P3, P4, and P5.
To ensure the proper distribution of power, the power of every power ranger must remain less than the sum of powers of other power rangers.
If the above condition is not met, there's an emergency. Can you let us know if there's an emergency?
Input
The first and the only line of input contains 5 integers P1, P2, P3, P4, and P5.


Constraints
0 <= P1, P2, P3, P4, P5 <= 100
Output
Output "SPD Emergency" (without quotes) if there's an emergency, else output "Stable".
Example
i/p: 1 2 3 4 5
o/p : stable

i/p : 1 2 3 4 100
o/p : SPD Emergency
*/
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int arr[5];
	int sum=0,flag=0;
	for (int i=0;i<5;i++)
	cin>>arr[i];

	for(int i=0;i<5;i++){
		sum+=arr[i];
		}
	for(int i=0;i<5;i++){
		if(arr[i]>=(sum-arr[i]))
		flag+=1;
	}
	if (flag>0)
		cout<<"SPD Emergency";
	else
		cout<<"Stable";


	// Your code here
	return 0;
}
