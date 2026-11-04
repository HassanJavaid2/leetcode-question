class Solution {
public:
    bool isPalindrome(int x) {
        string n=to_string(x);
        int l,r;
        l=0;
        r=x.length() - 1;
        while(l<r)
        {
            if(x[l]!=x[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};