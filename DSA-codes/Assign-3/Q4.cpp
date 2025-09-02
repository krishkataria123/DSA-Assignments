#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prese(char ch){
    if(ch=='^') return 3;
    else if(ch=='*'||ch=='/') return 2;
    else if(ch=='+'||ch=='-') return 1;

}
string infix_to_postfix(string s,stack<char> &st){
    string ans;
    int size=s.size();
    for(int i=0;i<size;i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) ans+=s[i];
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty()&&st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty()&&(prese(st.top())>=prese(s[i]))) {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);

        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s="9+8/2*60";
    stack<char> st;
    cout<<infix_to_postfix(s,st);
    return 0;
}