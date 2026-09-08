class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        size_t num_size = nums.size();
        for(size_t i = 0; i < num_size - 1; ++i){
            for (size_t j = i + 1; j < num_size; ++j){
                if (nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if(!result.empty()){
                break;
            }
        }
        return result;
    }
};
