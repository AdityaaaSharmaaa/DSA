class Solution {
public:

    int cal_fib(int n, vector<int>& dp_store){
        if(n == 0 || n == 1) return n;
        if(dp_store[n] != -1) return dp_store[n];

        int dp = cal_fib(n-1, dp_store) + cal_fib(n -2, dp_store);
        dp_store[n] = dp;
        return dp_store[n];
    }
    int fib(int n) {
        vector<int> dp_store(n + 1, -1);
        // for(int i = 0; i <= n; i++){
        //     dp_store[i] = -1;
        // }
        return cal_fib(n, dp_store);
    }
};