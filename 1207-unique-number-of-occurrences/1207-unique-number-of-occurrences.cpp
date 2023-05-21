class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr){
        vector<int> index;
        // sorting the original array
        sort(arr.begin(), arr.end());
        int c=0;
        int count=1;
        // running loop for checking the array
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1])
                count++;

            else{ 
                index.push_back(count);
                c++;
                count=1;
            }  
        }
        //pushing last element
        index.push_back(count);
        sort(index.begin(),index.end());
        for(int i=1;i<=c;i++){
            if(index[i]==index[i-1])
                return false;
        }
        return true;
        }
};  