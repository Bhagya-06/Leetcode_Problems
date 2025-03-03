//Leetcode Problem 69. Sqrt(x)
//To find sqrt of x without using any inbuilt functions

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;  // Base cases

    int left = 1, right = x, ans = 0;
    
    while (left <= right) {
        long mid = left + (right - left) / 2;  // Using Binary search method and calculate mid value
        
        if (mid * mid == x) {
            return mid;  // In case of perfect square
        } else if (mid * mid < x) {
            ans = mid;   // Store closest possible answer to return
            left = mid + 1; // Increase left and iterate again
        } else {
            right = mid - 1; // Decrease right and iterate again
        }
    }
    return ans;  // Return the integer part of sqrt(x)
}
