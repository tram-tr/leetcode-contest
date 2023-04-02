class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxLength = 0;
        int zeros = 0, ones = 0;
        
        for (int i = 0; i < s.length(); i++) {
            zeros = ones = 0;
            int k, j;
            for (j = i; j < s.length(); j++) {
                if (s[j] == '0') 
                    zeros++;
                else
                    break;
            }
            
            for (k = j; k < s.length(); k++) {
                if (s[k] == '1')
                    ones++;
                else
                    break;
                if (ones == zeros)
                    maxLength = max(maxLength, ones + zeros);
            }
                    
        }
        
        return maxLength;
    }
};
