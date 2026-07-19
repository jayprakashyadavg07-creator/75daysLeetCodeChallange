class Solution {
public:
    double myPow(double x, long n) {
        
        if (n == 0)
            return 1;

        // Negative power handle ,jastai 2^-3=1/2^3 matlb 1/2*2*2=1/8=>  (1/8 ko)=>0.125 negative haldle vayo positive ma
        if (n < 0) {
        return myPow(1 / x,-n);
        }

        // Even power
        if (n % 2 == 0) {
            return myPow(x * x, n / 2);//x*x number ho n vaneko tesko power ho multiple kati time hunxa 2^6=2*2*2*2*2*2
        }
        // Odd power
        else {
            return x * myPow(x * x, (n-1) / 2);//(n-1/2)xa ni yo ho power number ko 4^2 
        }
            
    }
};