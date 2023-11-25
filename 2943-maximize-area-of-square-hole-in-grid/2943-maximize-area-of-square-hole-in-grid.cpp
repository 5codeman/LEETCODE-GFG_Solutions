class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        
        int sizeH = hBars.size();
        int sizeV = vBars.size();
 
        int maxH = 1;
        int maxV = 1;
        
        int startH = hBars[0] - 1;
        int startV = vBars[0] - 1;
       
        for(int i = 1; i < sizeV; i++)
        {
             if(vBars[i - 1] != vBars[i] - 1) 
             {
                maxV = max(maxV, (vBars[i - 1] + 1) - startV);
                startV = vBars[i] - 1;
             }
        }
        maxV = max(maxV, vBars[sizeV - 1] + 1 - startV);
        
        for(int i = 1; i < sizeH; i++)
        {
            if(hBars[i-1] != hBars[i]-1) 
            {
                maxH = max(maxH, (hBars[i - 1] + 1) - startH);
                startH = hBars[i] - 1;
            }
        }
        maxH = max(maxH, hBars[sizeH - 1] + 1 - startH);
        
        // int answer = min(maxV, maxH) * min(maxV, maxH);
        int answer = min(maxV, maxH);
        return answer * answer;
    }
};

// Runtime error in below code

// class Solution {
// public:
//     int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
//         int hr_bar = n + 2;
//         int vr_bar = m + 2;
//         sort(hBars.begin(), hBars.end());
//         sort(vBars.begin(), vBars.end());
        
//         // int check = 2;
//         int cnt_hr = 1;
//         int cnt_vr = 1;
//         int max_area = 0;
//         if(hr_bar >= vr_bar)
//         {
//             for(int i = 2, k = 0; i != vr_bar; i++, k++)
//             {
//                 if(hBars[k] == i && vBars[k] == i)
//                 {
//                     cnt_hr++;
//                     cnt_vr++;
//                 }
//                 if(cnt_hr == cnt_vr)
//                 {
//                     int area = cnt_hr * cnt_vr;
//                     max_area = max(max_area, area);
//                 }
                
//             }
//             return max_area;
//         }
        
//         if(hr_bar < vr_bar)
//         {
//             for(int i = 2, k = 0; i != hr_bar; i++, k++)
//             {
//                 if(hBars[k] == i && vBars[k] == i)
//                 {
//                     cnt_hr++;
//                     cnt_vr++;
//                 }
//                 if(cnt_hr == cnt_vr)
//                 {
//                     int area = cnt_hr * cnt_vr;
//                     max_area = max(max_area, area);
//                 }
                
//             }
//             return max_area;
//         }
//         return 0; //max_area;
//     }
// };