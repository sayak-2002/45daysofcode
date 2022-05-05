//Problem Name - Implement strStr()
//Problem Link - https://leetcode.com/problems/implement-strstr/
// T.C = O(n)



class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=-1){
            return haystack.find(needle);
        }
        return -1;
    }
};