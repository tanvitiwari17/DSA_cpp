#include <iostream>
#include<algorithm>
#include<iterator>
using namespace std;

void Union_arr(int arr[],int arr2[],int m,int n){
int i=0,j=0;
while(i<m && j<n)
{
    //if (arr[i]=arr2[j]){continue;}
    if(arr[i]<arr2[j])
    {
        cout<<arr[i++]<<" ";
    }
    else if (arr2[j]<arr[i])
        cout<< arr2[j++]<<" ";

    else {
        cout<<arr2[j++]<<" ";
        i++;
    }

}
while(i<m){cout<<arr[i++]<<" ";}
while(j<n) {cout<<arr2[j++]<<" ";}

}
void intersection_arr(int arr1[],int arr2[],int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if (arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
        cout<<arr2[j]<<" ";
        i++;
        j++;
        }
    }
}
int main()
{
int first[]={3,7,9,14,32};
int second[]={4,7,8,21,33};
int m = sizeof(first) / sizeof(first[0]);
int n = sizeof(second) / sizeof(second[0]);
cout<<"Union: ";
Union_arr(first,second,m,n);
cout<<"\nIntersection: ";
intersection_arr(first,second,m,n);
/* std::vector<int> v(10);
    std::vector<int>::iterator it, st;

    std::sort(first, first + n);
    std::sort(second, second + n);

    // Using default function
    it = std::set_union(first, first + n, second,
                        second + n, v.begin());

    std::cout << "The union has " << (it - v.begin())
              << " elements:\n";
    for (st = v.begin(); st != it; ++st)
        std::cout << ' ' << *st;
    std::cout << '\n';

    return 0;
*/
    return 0;
}
