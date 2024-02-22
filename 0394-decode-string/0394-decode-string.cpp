class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(auto ch:s){
            if(ch == ']'){
                string stringToRepeat = "";
                while(!st.empty() && st.top() != "["){
                    string top = st.top();
                    stringToRepeat += top;
                    st.pop();
                }
                st.pop();
                string numericTime = "";
                while(!st.empty() && isdigit(st.top()[0])){
                    numericTime += st.top();
                    st.pop();
                }
                reverse(numericTime.begin(),numericTime.end());
                int n= stoi(numericTime);
                
                //final decoding
                string currentDecode = "";
                while(n--){
                    currentDecode += stringToRepeat;
                }
                st.push(currentDecode);
            }
            else{
                string temp(1,ch);
                st.push(temp);
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};