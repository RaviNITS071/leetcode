class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> available;
        unordered_map<char,int> need;
        need['b'] = 1;
        need['a'] = 1;
        need['l'] = 2;
        need['o'] = 2;
        need['n'] = 1;

        for(char i : text){
            available[i]++;
        }

        int ans = INT_MAX;
        for(auto it : need){
            int a = available[it.first];
            int times = a / it.second;
            ans = min(times,ans);
        }

        return ans;
    }
};