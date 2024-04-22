class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        int n=num;
        n=abs(n);
        string res="";
        while(n!=0){
            res += to_string(n%7);
            n/=7;
        }
        if(num<0){
            res+='-';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};