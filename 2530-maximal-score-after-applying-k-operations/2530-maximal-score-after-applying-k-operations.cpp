class Solution {
	public:
		long long maxKelements(vector<int>& nums, int k) {
			long long Score = 0;
			priority_queue<int> pq;
			for(int i=0; i<nums.size(); i++) pq.push(nums[i]);
			for(int i=0; i<k; i++)
            {
				int temp=pq.top();
				pq.pop();
				Score += temp;
				pq.push(ceil((double)temp/3));
			}
			return Score;
		}
	};