class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int need[26] = {0};
        int available[26] = {0};

        for(char i : ransomNote){
            need[i - 'a']++;
        }
        for(char i : magazine){
            available[i - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(need[i] > available[i]) return false;
        }

        return true;
    }
};