class Solution {
	public:
		string categorizeBox(int l, int w, int h, int m) {
			long long vol=(long long)(l)*(long long)(w)*(long long)h;

			bool cond1 = (vol>=1e9 || (l>=1e4 || w>=1e4 || h>=1e4));
			bool cond2 = m>=100;

			if(cond1 && cond2) return "Both";
			else if(cond1) return "Bulky";
			else if(cond2) return "Heavy";
			else return "Neither";
		}
	};