class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);
        for(char ch:s){
            count[ch-'a']++;
        }
        for(char ch:t){
            count[ch-'a']--;
        }

        // bool ans = all_of(begin(count),end(count),[](int ele){
        //     return ele == 0;
        // });
        // return ans;
        for(auto it :count){
            if(it != 0){
                return false;;
            }
        }
        return true;
    }
};