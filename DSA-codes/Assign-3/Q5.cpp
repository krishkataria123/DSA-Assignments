#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    stack<int> st;
    string s = "982/60*+";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            int elem2=st.top();
            st.pop();
            int elem1=st.top();
            st.pop();
            if(s[i]=='+') st.push(elem1+elem2);
            else if(s[i]=='-') st.push(elem1-elem2);
            else if(s[i]=='*') st.push(elem1*elem2);
            else if(s[i]=='/') st.push(elem1/elem2);
        }

    }
    cout<<st.top();
    return 0;
}