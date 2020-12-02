#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getMedian(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0,c;
    int m1=-1,m2=-1;

    if((m+n)%2 ==1)
    {
        for(c=0;c<=(m+n)/2;c++){
            if (i!=n and j!=m)
                m1=(arr1[i]>arr2[j])? arr2[j++]:arr1[i++];

            else if (i<n)
                m1=arr1[i++];
            else
                m1=arr2[j++];
        }
        return m1;
    }
    else
        for(c=0;c<=(m+n)/2;c++){
            m2=m1;
            if (i!=n and j!=m)
                m1=(arr1[i]>arr2[j])? arr2[j++]:arr1[i++];

            else if (i<n)
                m1=arr1[i++];
            else
                m1=arr2[j++];
        }
        return (m1+m2)/2;

}

int main()
{
    int ar1[] = {900};
    int ar2[] = {5, 8, 10, 20};

    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    cout << "Median is "<<getMedian(ar1, ar2, n1, n2);
    return 0;
}
