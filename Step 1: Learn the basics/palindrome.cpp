// https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) 
    {
        int y = x;
        int rev = 0;
        if (x < 0) return false;
        while (y != 0)
        {
            int digit = y % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return false;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return false;
            rev = rev * 10 + digit;
            y /= 10;
        }

        if (rev == x) return true;
        else return false;
    }
};