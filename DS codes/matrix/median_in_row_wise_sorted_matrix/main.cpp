#include <iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int median(vector<vector<int>> &matrix, int r, int c){
     /*   vector <int> v1;
        for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++)
        v1.push_back(matrix[i][j]);
        }
        sort(v1.begin(),v1.end());
        if(v1.size()%2==0)
        return (v1[v1.size()/2]+v1[v1.size()/2-1])/2;
        else
        return v1[v1.size()/2];
        */

        int mn = INT_MAX , mx = INT_MIN;
        for(int i = 0 ;i < r; i++)
        {
           mn = min(mn,matrix[i][0]);
           mx = max(mx, matrix[i][c-1]);
        }
        int desired = (r*c+1)/2;
        while (mn<mx)
        {
            int mid = mn + (mx-mn)/2;
            int place = 0;

            //count of elements smaller that mid
            for(int i=0;i<r;++i)
                place += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
            if (place < desired)
                mn = mid + 1;
            else
                mx = mid;
        }
        return mn;
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
        cout<<"Median: "<<median(matrix,row,col);

    }
    return 0;
}
