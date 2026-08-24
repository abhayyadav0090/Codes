class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        
        // Calculate prefix sums in-place
        for (int i = 1; i < n; i++) {
            stones[i] += stones[i-1];
        }
        
        // Base case: if you must take all remaining stones at the end
        int max_diff = stones[n-1];
        
        // Traverse backwards, starting from the second to last possible choice
        for (int i = n - 2; i >= 1; i--) {
            max_diff = max(max_diff, stones[i] - max_diff);
        }
        
        return max_diff;
    }
};