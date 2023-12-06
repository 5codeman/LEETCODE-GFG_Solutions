#include<bits/stdc++.h>
using namespace std;
string key[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

class Solution {
public:
int keypad(int num, vector<string>&output) {
    if(num == 0 || num == 1)
    {
        output.push_back("");
        return 1;
    }

    int ans = keypad(num / 10,  output);

    if(num % 10 != 7 && num % 10 != 9)
    {
        string s1 = key[num % 10];
        //copy the output array 2 more times
        for(int i = 0; i < ans * 2; i++)
        {
            output.push_back(output[i]);
        }
        // concate all character of s1 in the output array
        int i = 0;
        while(i < ans)
        {
            output[i] += s1[0];
            i++;
        }
        while(i < ans * 2)
        {
            output[i] += s1[1];
            i++;
        }
        while(i < ans * 3)
        {
            output[i] += s1[2];
            i++;
        }
        return ans * 3;
    }

    else
    {
        string s1 = key[num % 10];
        //copy the output array 2 more times
        for(int i = 0; i < ans * 3; i++)
        {
            output.push_back(output[i]);
        }
        // concate all character of s1 in the output array
        int i = 0;
        while(i < ans)
        {
            output[i] += s1[0];
            i++;
        }
        while(i < ans * 2)
        {
            output[i] += s1[1];
            i++;
        }
        while(i < ans * 3)
        {
            output[i] += s1[2];
            i++;
        }
        while(i < ans * 4)
        {
            output[i] += s1[3];
            i++;
        }
        return ans * 4;
    }
}

    vector<string> letterCombinations(string digits) {
        vector<string>output;
        if(digits.size() == 0) return output;
        int num = 0;
        // int num = stoi(digits); // dont work, Think
        for(int i = 0; i < digits.size(); i++)
        {
            num = (num * 10) + digits[i] - '0';
        }
        keypad(num, output);
        return output;
    }
};