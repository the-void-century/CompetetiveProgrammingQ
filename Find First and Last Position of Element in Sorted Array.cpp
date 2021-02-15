class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                if(mid==0 or nums[mid-1]<nums[mid])
                {
                    ans[0]=mid;
                    break;
                }
                else
                {
                    r=mid-1;
                }
                
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        l=0;r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                if(mid==nums.size()-1 or nums[mid]<nums[mid+1])
                {
                    ans[1]=mid;
                    break;
                }
                else
                {
                    l=mid+1;
                }
                
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};
