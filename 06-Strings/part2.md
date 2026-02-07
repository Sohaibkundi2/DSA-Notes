##   125. Valid Palindrome

```
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0 ;
        int end = s.size()-1;

        while(st< end){
            if (!isalnum(s[st])) {
                st++;
                continue;
            }

            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
    }
};
```

## 1910. Remove All Occurrences of a Substring

```
class Solution {
public:
    string removeOccurrences(string s, string part) {

        while (s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
          }
        return s;
    }
};

```