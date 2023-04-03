/*
 * Roman numerals are represented by seven different symbols:
 * I, V, X, L, C, D and M.
 * Given a roman numeral, convert it to an integer.
 */

#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
        };

        size_t len = s.length();
        int res = roman[s[len - 1]];
        for (int i = 0; i < len - 1; i++)
        {
            if (roman[s[i]] >= roman[s[i + 1]])
            {
                res += roman[s[i]];
            }
            else
            {
                res -= roman[s[i]];
            }
        }
        return res;
    }
};
