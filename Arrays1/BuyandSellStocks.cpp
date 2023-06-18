#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int miniprofit=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<prices.size();i++)
    {
         miniprofit=min(miniprofit,prices[i]);
         maxprofit=max(maxprofit,prices[i]-miniprofit);
    }
 return maxprofit;

}