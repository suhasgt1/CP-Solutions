class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2!=0) return false ; 
        stack <char> st ; 
        for (char x : s){
            if (x=='('|| x=='{'||x=='[')st.push(x);
            else if (!st.empty())  {
                if (x==']' && st.top()=='[') st.pop();
                else if (x==')' && st.top()=='(') st.pop();
                else if (x=='}' && st.top()=='{') st.pop();
                else return false ; 
            }   
            else return false ; 
        }
        if (!st.empty()) return false ; 
        return true ; 
    }
};