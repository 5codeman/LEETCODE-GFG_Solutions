class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       // This logic AND Data str.(Deque) is Learned from youtube
       // we can also solve this q by n*K, Priority queue and the deque
        deque<int>dq;
        int len = nums.size();
        vector<int>arr;
        for(int i = 0; i < len; i++)
        {
            if(dq.empty() || nums[dq.back()] > nums[i]) dq.push_back(i);
            
            else
            {
                while(!dq.empty() && nums[dq.back()] <= nums[i])
                {
                    dq.pop_back(); //kyunki nums[i] abhi tak bara aa gaya hai
                }
                dq.push_back(i);
            }
            
            if(i >= k - 1)
            {
                while(i - dq.front() >= k)
                {
                    dq.pop_front();
                }
                arr.push_back(nums[dq.front()]);   
            }
        }
        return arr;
    }
};