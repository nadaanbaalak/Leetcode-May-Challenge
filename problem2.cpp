/*  Problem Statement : JEWELS AND STONE
You're given strings J representing the types of stones that are jewels, and S representing the stones you have. Each character in S is a type of stone you have.  
You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1 : 
    Input: J = "aA", S = "aAAbbbb"
    Output: 3

Example 2 :
    Input: J = "z", S = "ZZ"
    Output: 0 

Note : The characters in J are distinct.  
*/

int numJewelsInStones(string J, string S)
{
    unordered_map<int, int> hash;
    int j_size = J.length();
    int s_size = S.length();
    for (int i = 0; i < j_size; i++)
    {
        hash[J[i]] = 0;
    }
    for (int i = 0; i < s_size; i++)
    {
        if (hash.find(S[i]) != hash.end())
            hash[S[i]]++;
    }
    int sum = 0;
    for (auto it = hash.begin(); it != hash.end(); it++)
    {
        sum += (it->second);
    }
    return sum;
}