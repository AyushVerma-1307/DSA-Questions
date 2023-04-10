//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    void solve(string s,vector<string>& ans, int index,string output){
        //base case
        if(index == s.size()){
            if(output.length()>0){
                ans.push_back(output);
            }
            return;
        }
        
        //exclude
        solve(s,ans,index+1,output);
        
        // include
        output.push_back(s[index]);
        solve(s,ans,index+1,output);
    }
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    int index=0;
		    string output="";
		    solve(s,ans,index,output);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends