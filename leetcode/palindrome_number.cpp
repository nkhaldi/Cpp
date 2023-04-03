/*
 * Given an integer x, return true if x is a palindrome, and false otherwise.
 * Could you solve it without converting the integer to a string?
 */

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x == 0)
            return true;
        else if (x < 0 || x % 10 == 0)
            return false;

        unsigned num = x;
        unsigned rev = 0;
        while (x)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return rev == num;
    }
};