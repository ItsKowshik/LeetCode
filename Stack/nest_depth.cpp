/*https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/*/
//LeetCode problem 1614
#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s){
    int maxDepth = 0;
    stack<char> st;
    for(int i = 0; i < s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
            if(st.size()>maxDepth){
                maxDepth = st.size();
            }
        }
        else if(s[i]==')'){
            st.pop();
        }
    }
    return maxDepth;
}

int main(){
    string s;
    cin>>s;
    cout<<maxDepth(s)<<endl;
    return 0;
}