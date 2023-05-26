#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7,1,5,3,6,4};

    int maxP = 0; 
    int l = 0, r = 0;
    while (r < prices.size()){
        if (prices[r] > prices[l]) {
            maxP = max(maxP, prices[r] - prices[l])
        } else
            l = r;
        r++;
    }
    cout<<maxp<<endl;
}
