#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s="Krish";
    int size=s.size();
    stack<char> st;
    for(int i=0;i<size;i++){
        st.push(s[i]);
    }
    cout<<"Reverse of the given sstring is ";
    for(int i=size;i>=0;i--){
        cout<<st.top();
        st.pop();
    }

    return 0;
}