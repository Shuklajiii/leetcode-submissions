class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        for(int i=0;i<(n/2);i++){
            for(char c='a';c<palindrome[i];c++){
                palindrome[i] = c;
                return palindrome;
            }
        }
        for(int i=0;i<(n/2);i++){
            for(char c=palindrome[i]+1;c<='z';c++){
                palindrome[n-i-1] = c;
                return palindrome;
            }
        }
        return "";
    }
};
