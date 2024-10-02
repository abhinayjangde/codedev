#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
/*
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)
*/
int main()
{
    stack<int> st;
    string s = "leEeetcode";
    string ans = "";
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (st.top() == char(tolower(s[i]))){
            if(st.top() == s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        else if (st.top() == s[i]){
            st.push(s[i]);
        }
        else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        char ch = st.top();
        ans=ch + ans;
        st.pop();
    }
    cout<<ans;
    // l e e 

    // for(int i=0;i<s.size();i++){
    //     if(st.empty()){
    //         st.push(s[i]);
    //     }else{
    //         if(st.top() == s[i] || abs(st.top()-s[i])!=32){
    //             st.push(s[i]);
    //         }else{
    //             st.pop();
    //         }
    //     }
    // }

    return 0;
};