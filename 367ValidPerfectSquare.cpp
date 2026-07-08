class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 0;
        long long high = num;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;

            if (square == num) {
                return true;
            }
            else if (square < num) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return false;
        
    }
};

/*we used same logic as leetcode no. 90, where we found the integer square root 

now as that problem was returning the number which was its squareroot, here too if we see if we found the sqrt that means it is a perfect square, 
but if we don't find it, then it is not a perfect square, we will return false


just changes the return type and logic to fit the problem requirements*/
