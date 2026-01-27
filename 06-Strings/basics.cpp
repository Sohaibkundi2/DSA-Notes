#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    // Creating and initializing strings
    string str1 = "Hello, World!";

    cout << "Original string: " << str1 << endl;

    // Reversing the string
    reverse(str1.begin(), str1.end());
    cout<<"Reverser String: " << str1<<endl;

    cout<<"length of string is: "<< str1.length()<<endl;

    return 0;
}

// LeetCode problem No 344

class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int end = s.size()-1;

        while (st < end){
            swap(s[st],s[end]);
            st++,end--;
        }
        
    }
};