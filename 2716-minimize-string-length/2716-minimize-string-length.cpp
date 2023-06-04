class Solution {
public:
int minimizedStringLength(string s) {

   unordered_set<char>st(s.begin(), s.end());
   int size = st.size();
    return size;
    
}
};