class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.length(); i++)
        {   
            s[i]=tolower(s[i]);
            if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))
            {
                temp += s[i];
            }
        }
        int l=0;
        int r=temp.length()-1;
        while(l<r)
        {
            if(temp[l]!=temp[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};