class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st; 
        for (string x : tokens){
            if (x!="+" && x!="-" && x!="*" && x!="/") st.push(stoi(x));
            else {
                int opr2=st.top();
                st.pop();
                int opr1= st.top();
                st.pop();
                if (x=="+") st.push(opr1+opr2);
                else if (x=="*") st.push(opr1*opr2);
                else if (x=="-") st.push(opr1-opr2);
                else if (x=="/") st.push(opr1/opr2);
            }
        }
        return st.top();
    }
};