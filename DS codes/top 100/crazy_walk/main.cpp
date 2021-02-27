/*
Sky (the blue ranger) wants to replace Jack (the red ranger) from his position. For this, he needs to conquer the entire Base.
The Base can be represented as an M*N grid, and Sky needs to conquer it cell by cell. Sky starts conquering the Base from the cell (1, 1). In each move, he conquers the cell, and moves to an adjacent non- conquered cell (he cannot move if there is no adjacent non- conquered cell). Now, there is a catch, the last cell he needs to conquer is (M, N) so as to complete the quest for the red ranger tag!

Please let us know if Sky can replace Jack by conquering all the cells in the Base.

Note: The diagonal cells are not considered as adjacent cells.
Input
The first and the only line of input contains two integers M and N.

Constraints
1 <= M, N <= 1000
Output
Output "YES" (without quotes) if Sky can conquer the entire Base to replace Jack, else output "NO" (without quotes).
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;

	if(m==n and m%2==0)
	cout<<"NO";
	else if (m%2==0 and n%2==0)
	cout<<"NO";
	else
	cout<<"YES";

	// Your code here
	return 0;
}
