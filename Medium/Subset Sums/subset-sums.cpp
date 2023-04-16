//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
    void solve(vector<int> arr,int N,vector<int>& ans,vector<int> output, int index, int sum){
        if(index >= N){
            for(auto it: output){
                sum+=it;
            }
            ans.push_back(sum);
            return;
        }
        //exclude
        solve(arr,N,ans,output,index+1,sum);
        
        //include
        output.push_back(arr[index]);
        solve(arr,N,ans,output,index+1,sum);
        output.pop_back();
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        vector<int> output;
        int index=0;
        int sum=0;
        solve(arr,N,ans,output,index,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends