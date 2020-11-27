#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int curr_price = INT_MAX;
    int profit =0;

    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<curr_price)
            curr_price=prices[i];

        else if (prices[i]-curr_price > profit)
            profit = prices[i]-curr_price;
    }
    return profit;
}
int main()
{
    vector<int> prices ={7,1,5,3,6,4};
    cout<<"Maximum Profit: "<<maxProfit(prices);
    return 0;
}
