#include <climits>

class Solution {
public:
    int reverse(int x) { // Function name must be 'reverse'
        int newno = 0;
        while (x != 0) {
            int lastdig = x % 10;
            x = x / 10;

            // Check for overflow before multiplying by 10
            if (newno > INT_MAX / 10 || (newno == INT_MAX / 10 && lastdig > 7)) return 0;
            if (newno < INT_MIN / 10 || (newno == INT_MIN / 10 && lastdig < -8)) return 0;

            newno = newno * 10 + lastdig;
        }
        return newno;
    }
};