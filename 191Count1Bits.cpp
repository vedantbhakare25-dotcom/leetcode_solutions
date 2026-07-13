/*

Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

 

Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.

Example 2:

Input: n = 128

Output: 1

Explanation:

The input binary string 10000000 has a total of one set bit.



class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bits;
        int cnt =0;
        while(n>0) 
        {
            bits.push_back(n&1);
            n>>=1;
        }
        for( int i: bits)
        {
            if(i==1) cnt ++;
        }
        return cnt;
    }
};
*/