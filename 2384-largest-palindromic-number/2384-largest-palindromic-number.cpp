class Solution {
public:
    // Ye q aache se karna with good approach
    // Beakr nahi maha ghatiya code likhe hai 
    string largestPalindromic(string num) {
        int arr[10] = {0};
        int sum =0;
        for(int i=0; i<num.size(); i++)
        {
            // insert in hash array and find sum
            int index = num[i] - '0';
            arr[index]++;
            sum += index;
        }
        if(sum == 0) return "0";
        int size = 0;
        int mid_element = -1;
        bool check = false;
        // find size
        for(int i=0; i<10; i++)
        {
            if(arr[i] % 2 == 0) size += arr[i];
            
            else 
            {
                check = true;
                mid_element = i;
                size += arr[i]-1;
            }
        }
        
        if(check == true) size++;
        
        string str(size,'0');
        if(size%2 != 0)
        {
            char temp = mid_element + '0';
            str[size/2] = temp;
        }
        int L_i = 0;
        int R_i = size-1;
        for(int i=9; i>=0; i--)
        {
            while(arr[i] > 1)
            {
                char temp = i + '0';
                str[L_i] = temp;
                str[R_i] = temp;
                L_i ++;
                R_i --;
                arr[i] -= 2;
            }
        }
        
        //For zero work
        string ans;
        int k=0;
        for(int i=0; i<(str.size()/2)+1; i++)
        {
            if(str[i] != '0') 
            {
                k = i;
                break;
            }
        }
        int len = str.size()-(2*k);
        ans = str.substr(k,len);
        return ans;
    }
};