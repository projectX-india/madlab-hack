vector<int> Solution::getRow(int N) {
    vector<int> B;
    int prev = 1;
    B.push_back(1);
    for (int i = 1; i <= N; i++) {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = (prev * (N - i + 1)) / i;
        B.push_back(curr);
        prev = curr;
    }
    
    return B;
}
