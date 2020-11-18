// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sumTarget;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++)
                if(nums[i] + nums[j] == target){
                    sumTarget.push_back(i);
                    sumTarget.push_back(j);
                    break;
                }

        }
        return sumTarget;
    }
};
