class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, digit, product=1, num=n;
        while(n>0){
            digit = n%10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        int final=sum+product;
        if(num%final==0) return true;
        else return false;
    }
};