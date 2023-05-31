/*https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/*/
// LeetCode problem 1475
#include <bits/stdc++.h>
using namespace std;

vector<int> discount(vector<int> prices){
    vector<int> ans(prices.size());
    stack<int> st;
    st.push(0);
    for(int i=prices.size()-1;i>=0;i--){
        int curr = prices[i];
        while(st.top()>curr){
            st.pop();
        }
        ans[i] = curr - st.top();
        st.push(curr);
    }

    return ans;

}

int main(){
    int n;
    cin>>n;
    vector<int> prices;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        prices.push_back(k);
    }
    vector<int> ans = discount(prices);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}