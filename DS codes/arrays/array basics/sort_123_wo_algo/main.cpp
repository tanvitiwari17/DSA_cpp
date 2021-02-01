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
    int count0=0,count1=0,count2=0;
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
        count0+=1;
     else if (arr[i] == 1)
        count1+=1;
     else
        count2+=1;
   i=0;
     while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }

    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }

    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }

        cout<<"\nnew Array: ";
        display(arr,n);

    return 0;
}
