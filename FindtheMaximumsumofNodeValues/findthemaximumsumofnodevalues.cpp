class Solution {
public:
    typedef long long ll;
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        ll sum = 0;
        int count = 0;
        ll minloss = LLONG_MAX;

        for(ll num : nums)
        {
            if((num^k)>num)
            {
                count++;
                sum += (num^k);
            }
            else
            {
                sum += num;
            }

            minloss = min(minloss, abs(num-(num^k)));
        }
        ll originalSum = std::accumulate(nums.begin(), nums.end(), 0LL);
        if(count % 2 == 0 && sum>=originalSum)
        {
            return sum;
        }

        return sum-minloss;
    }
};