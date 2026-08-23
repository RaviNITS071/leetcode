class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> need;
        unordered_map<char,int> available;

        for(int i : ransomNote){
            need[i]++;
        }
        for(int i : magazine){
            available[i]++;
        }

        for(auto it : need){
            char ch = it.first;
            if(available[ch] < it.second) return false;
        }
        return true;
    }
};