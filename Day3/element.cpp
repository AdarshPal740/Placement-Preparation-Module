class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        for(auto it:nums){
            um[it]++;
        }
        vector<int>ans;
        int mid=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            if(um[nums[i]]>mid){
                ans.push_back(nums[i]);
                um[nums[i]]=0;
            }
        }
        return ans;
    }
};