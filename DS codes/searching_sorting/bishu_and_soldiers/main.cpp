#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sol_power[n];
    for(int i=0;i<n;i++)
    cin>>sol_power[i];

    sort(sol_power,sol_power+n);

    int rounds;
    cin>>rounds;
while(rounds--)
{
    int bishu_power;
    cin>>bishu_power;
    int sum=0,count=0;

    for(int i=0;i<n;i++)
    {
        if(sol_power[i]<=bishu_power){
        sum+=sol_power[i];
        count++;
        }
        else if(sol_power[i]>bishu_power)
        break;
    }
    cout<<count<<" "<<sum;
    cout<<endl;
}
return 0;
}
