//Leetcode Problem 50: Pow(x, n)

double myPow(double x, int n) {
    if (n == 0) return 1;  // Base case: x^0 = 1

    long long N = n;  // To prevent overflow

    if (N < 0) {  
        x = 1 / x;  // if N is negative then reciprocal x
        N = -N;     // convert N to positive
    }

    double res = 1.0;

    while (N > 0) {
        if (N % 2 == 1) {  
            res *= x;  // Multiply x if N is odd
        }
        x *= x;  // Square x
        N /= 2;  // Divide exponent by 2
    }

    return res;
}
