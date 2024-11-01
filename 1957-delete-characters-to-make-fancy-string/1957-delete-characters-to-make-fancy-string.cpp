class Solution {
public:
    string makeFancyString(string s) {
        stack<char>st;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(st.size()<=1) st.push(s[i]);
            else{
                char c1=st.top();
                st.pop();
                char c2 = st.top();
                if(c1 == c2 && c1 == s[i]){
                    st.push(c1);
                }
                else{
                    st.push(c1),st.push(s[i]);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=(char)(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};