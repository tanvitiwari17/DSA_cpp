#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct elecount{
int e; // element
int c; // count
};
void elements_repeating(int arr[],int n,int k)
{
    if(k<2)
        return;

    //creating a temporary array
    struct elecount temp[k-1];
    for(int i=0;i<k-1;i++)
    temp[i].c=0;

    //processing all elements of input array

    for(int i=0;i<n;i++)
    {
        // if arr[i] is already present in element count array, count++
        int j;
        for(j=0;j<k-1;j++)
        {
            if(temp[j].e==arr[i])
                {temp[j].c+=1;
                break;}
        }
        // if arr[i] is not present in temp[]
        if(j==k-1){
                // place arr[i] in first available position and set count as 1
            int l;
            for(l=0;l<k-1;l++)
            {
                if(temp[l].c==0)
                {
                    temp[l].e = arr[i];
                    temp[l].c = 1 ;
                    break;
                }
            }
        // if all position in temp[] are filled, then decrease count of every element by 1
            if(l==k-1)
                for(l=0;l<k;l++)
                temp[l].c-+1;
        }
    }

    // check actual counts of potential candidates in temp[]
    for(int i=0;i<k-1;i++)
    {
        int ac=0; // actual count
        for(int j=0;j<n;j++)
            if(arr[j]==temp[i].e)
            ac++;
        //if ac >n/k, print
        if(ac>n/k)
            cout<<"Number: " << temp[i].e<<"\nCount: "<< ac<<endl;

    }

}
int main()
{
    int n,k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    elements_repeating(arr,n,k);
    return 0;
}
