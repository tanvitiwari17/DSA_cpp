// to print true if the input number exists in array, else false

#include <iostream>
using namespace std;

int main()
{
    int i,n, num,c=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements: "<<endl;
    for (i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nEnter the element: ";
    cin>>num;
    for (i=0;i<n;i++)
     {if (arr[i]== num)
             c=1;}
    if (c==1)
            cout<<"TRUE";
    else
        cout<<"FALSE";

    return 0;
}
