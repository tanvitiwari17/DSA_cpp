#include <iostream>

using namespace std;
void display(int arr[],int n)
{
    for (int i=0; i<n;i++)
        cout<<arr[i]<<"  ";
}
int main()
{
 int n,i,ele;
    int c_0=0,c_1=0,c_2=0;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Elements:";
    for (i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Array:";
    display(arr,n);

    for (i =0;i<n;i++)
        if (arr[i]== 0)
        c_0+=1;
     else if (arr[i] == 1)
        c_1+=1;
     else if (arr[i]==2)
        c_2+=1;
        else
        break;
    for (i=0;i<c_0;i++)
        arr[i]=0;
    for (i=c_0;i<(c_0+c_1);i++)
        arr[i]=1;
    for (i=(c_0+c_1);i<(c_0+c_1+c_2);i++)
        arr[i]=2;
        cout<<"\nnew Array: ";
        display(arr,n);

    return 0;
}
