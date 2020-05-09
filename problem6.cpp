/* Problem Statement : MAJORITY ELEMENT
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example : 
    Input: [2,2,1,1,1,2,2]
    Output: 2
*/

int majorityElement(vector<int> &nums)
{
    int size = nums.size();
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[nums[i]]++;
    }
    int mEle;
    for (auto &it : m)
    {
        if ((it.second) > size / 2)
        {
            mEle = it.first;
            break;
        }
    }
    return mEle;
}

// Time Complexity : O(N)
// Space Complexity : O(N)
// unordered_map is implemented in form of hash table so amortized time complexity of different operations like retrieval is O(1)