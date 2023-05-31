/*https://leetcode.com/problems/baseball-game/*/
//LeetCode problem 682
#include <bits/stdc++.h>
using namespace std;

int baseball(vector<string> operations){
    stack<int> op;
    for(int i=0;i<operations.size();i++){
        if(operations[i]=="+"){
            int a = op.top();
            op.pop();
            int b = op.top();
            op.pop();
            int tot = a + b;
            op.push(b);
            op.push(a);
            op.push(tot);
        }
        else if(operations[i]=="D"){
            op.push(op.top()*2);
        }
        else if(operations[i]=="C"){
            op.pop();

        }
        else{
            int num = stoi(operations[i]);
            op.push(num);
        }
        //cout<<op.top()<<" "<<op.size()<<endl;
    }
    int total = 0;
    while(!op.empty()){
        total = total + op.top();
        op.pop();
    }
    return total;
}

int main(){
    int n;
    cin>>n;
    vector<string> operations;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        operations.push_back(s);
    }
    cout<<baseball(operations)<<endl;
    return 0;
}