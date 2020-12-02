#include <iostream>

using namespace std;

int main()
{
    int n,i,ele;
    int counter=0;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter element:";
    cin>>ele;

    for(i=0;i<n;i++)
        if(arr[i]==ele)
        counter+=1;
    cout<<"Number of "<<ele<<" in array : "<<counter;
    return 0;

}
