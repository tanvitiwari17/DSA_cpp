#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
      /*  for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
            {
                if (matrix[i][j]==target)
                    return true;
            }
        return false;
*/

    for(int i=0;i<matrix.size();++i)
    {
        if(binary_search(matrix[i].begin(),matrix[i].end(),target))
            return 1;
    }
    return 0;
    }

int main()
{
vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

int target;
cout<<"target?  ";cin>>target;
if(searchMatrix(vect,target))
    cout<<"True";
else
    cout<<"False";
return 0;

}
