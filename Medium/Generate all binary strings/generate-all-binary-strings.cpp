//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
private:
    void solve(int num, vector<string> &arr, string &output, int index, bool prevOne){
        if(index == num){
            arr.push_back(output);
            return;
        }
        if(!prevOne){
            output.push_back('1');
            solve(num,arr,output,index+1,true);
            output.pop_back();
        }
        output.push_back('0');
        solve(num,arr,output,index+1,false);
        output.pop_back();
    }

public:
    void generateBinaryStrings(int num){
        vector<string> arr;
        string output;
        solve(num,arr,output,0,false);
        for(int i=arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends