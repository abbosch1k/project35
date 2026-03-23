
#include <iostream>
#include <stack>
using namespace std;

int priority(char op){
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    return 0;
}

int main(){
    string s;
    cin >> s;

    stack<char> st;

    for(char c:s){
        if(isalnum(c))
            cout<<c;
        else if(c=='(')
            st.push(c);
        else if(c==')'){
            while(st.top()!='('){
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(st.top())>=priority(c)){
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
