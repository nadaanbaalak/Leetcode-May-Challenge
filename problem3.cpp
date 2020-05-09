/* Problem Statement : RANSOM NOTE
Given an arbitrary ransom note string and another string containing letters from all the magazines, 
write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Example 1: 
    Input: ransomNote = "a", magazine = "b"
    Output: false

Example 2:
    Input: ransomNote = "aa", magazine = "ab"
    Output: false

Example 3:
    Input: ransomNote = "aa", magazine = "aab"
    Output: true

Constraints: You may assume that both strings contain only lowercase letters.
*/

bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<int, int> hash;
    int ransomNoteSize = ransomNote.length();
    int magazineSize = magazine.length();
    for (int i = 0; i < ransomNoteSize; i++)
    {
        hash[ransomNote[i]]++;
    }
    for (int i = 0; i < magazineSize; i++)
    {
        if (hash.find(magazine[i]) != hash.end())
        {
            hash[magazine[i]]--;
        }
    }
    for (auto it = hash.begin(); it != hash.end(); it++)
    {
        if ((it->second) > 0)
            return false;
    }
    return true;
}

// Time Complexity : O(N) where N=length of string Magazine
// Space complexity : O(N) where N=length of string Ransom Note