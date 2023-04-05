class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> arr;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            string word=sentences[i];
            for (int i = 0;i<word.length();i++){
                if (word[i]==' '){
                    count++;
                }  
            }
            arr.push_back(count);
        }
        int  max=INT_MIN;
        for(int k=0;k<arr.size();k++){
            if(arr[k]>max){
                max=arr[k];
            }
        }
        return max;
    }
};