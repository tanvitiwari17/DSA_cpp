#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int row_max1(vector<vector<int>>arr,int n, int m)
{
    int max_row_element = -1;
    int j = m - 1;
    int i = 0;
    while (i<n and j>=0)
    {
        if (arr[i][j]==1){
            max_row_element = i;
            j--;
        }
        else i++;
    }
    return max_row_element;
}

int main()
{
    int t;
    cout<<"t:";cin>>t;
    while(t--)
    {
        int row,col;
        cout<<"row:" ;cin>>row;
        cout<<"col:";cin>>col;
        vector<vector<int>>matrix(row,vector<int>(col));
        for(int i=0;i<row;++i)
            for(int j=0;j<col;++j)
            cin>>matrix[i][j];
        cout<<"Index of row with maximum number of 1s: "<<row_max1(matrix,row,col);

    }
    return 0;
}
