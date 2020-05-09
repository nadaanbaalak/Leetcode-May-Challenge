/* Problem Statement: NUMBER COMPLEMENT
Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

Example: 
    Input: num = 5
    Output: 2
    Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
*/

int findComplement(int num)
{
    int temp = num;
    int count = 0;
    while (temp)
    {
        count++;
        temp /= 2;
    }
    int j = 1;
    for (int i = 0; i < count; i++)
    {
        num = num ^ j;
        j = j << 1;
    }
    return num;
}
// Time complexity : O(logN)
// space Complexity : O(1)