/*https://leetcode.com/problems/remove-outermost-parentheses/*/
//LeetCode problem 1021
#include <bits/stdc++.h>
using namespace std;

string removeParanthesis(string s){
    stack<char> st;
    int sta=0;
    int ed=0;
    char arr[s.size()];
    for(int i=0; i<s.size();i++){
        arr[i]=s[i];
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            if(st.size()==0){
                sta = i;
            }
            st.push(s[i]);
        }
        else if(s[i]==')'){
            st.pop();
            if(st.size()==0){
                ed = i;
                arr[sta]=' ';
                arr[ed]=' ';
            }
        }
    }
    string ans;
    for(int i=0;i<s.size();i++){
        if(arr[i]!=' '){
            ans.push_back(arr[i]);
        }
    }
    return ans;


}

int main(){
    string s;
    cin>>s;
    cout<<removeParanthesis(s)<<endl;
    return 0;
}