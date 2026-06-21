class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> s;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        for(int i=0; i<26; i++){
            int minCount = INT_MAX;
            for(const string& word : words){
                int count = 0;
                for(char ch : word){
                    if(ch == alpha[i]){
                        count++;
                    }
                }
                minCount = min(minCount , count);
                if(minCount ==0){
                    break;
                }
            }
            for(int j=0; j<minCount; j++){
                s.push_back(string(1,alpha[i]));
            }
        }
        return s;
    }
};
