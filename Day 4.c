//Leetcode Problem no 2579: Count Total Number of Colored Cells

long long coloredCells(int n) {
    long long N = (long long)n;
    long long res = (N * N) + ((N - 1) * (N - 1)); 
    return res;
}
