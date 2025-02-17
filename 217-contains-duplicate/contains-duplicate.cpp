#include<unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int num:nums){
            if(ans.find(num) != ans.end()){
                return true;
            }
            ans.insert(num);
        }
        return false;
    }
};