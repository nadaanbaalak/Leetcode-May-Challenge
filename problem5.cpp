/* Problem Statement : First Unique Character in a String
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Example : 
    s = "leetcode"
    return 0.

    s = "loveleetcode",
    return 2.
*/

int firstUniqChar(string s)
{
    unordered_map<int, int> m;
    int str_size = s.length();
    for (int i = 0; i < str_size; i++)
    {
        m[s[i]]++;
    }
    for (int i = 0; i < str_size; i++)
    {
        if (m.find(s[i]) != m.end() && m[s[i]] == 1)
            return i;
    }
    return -1;
}

// Time complexity : O(N) where N = Length of string
// Space Complexity : O(N)