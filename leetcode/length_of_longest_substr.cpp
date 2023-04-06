/*
 * Дана строка s, найти длину самой длиной подстроки, где символы не повторядтся.
 */

#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> chars;

        int res = 0;
        int li = 0, ri = 0;

        while (ri < s.length())
        {
            char rc = s[ri];
            chars[rc]++;

            while (chars[rc] > 1)
            {
                char lc = s[li];
                chars[lc]--;
                li++;
            }

            res = max(res, ri - li + 1);
            ri++;
        }

        return res;
    }
};