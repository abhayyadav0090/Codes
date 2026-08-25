class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;

        long long cnt1 = 0, sum1 = 0, cnt2 = 0, sum2 = 0;
        for (int i = 0; i < half; i++) {
            if (num[i] == '?') cnt1++;
            else sum1 += (num[i] - '0');
        }
        for (int i = half; i < n; i++) {
            if (num[i] == '?') cnt2++;
            else sum2 += (num[i] - '0');
        }

        long long totalCnt = cnt1 + cnt2;

        if (totalCnt % 2 == 1) return true;

        long long diff = sum1 - sum2;
        long long delta = cnt1 - cnt2; // guaranteed even since totalCnt is even
        long long finalDiff = diff + 9 * delta / 2;

        return finalDiff != 0;
    }
};