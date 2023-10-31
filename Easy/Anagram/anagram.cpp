//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }

    int arr1[26] = {0};
    int arr2[26] = {0};
    
    for (int i = 0; i < a.length(); i++) {
        arr1[a[i] - 'a']++;
        arr2[b[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

        
        

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends