class Solution {
public:
    //'a'-32='A'
    string toLowerCase(string str) {
    for (char& c : str) {
        if (c >= 'A' && c <= 'Z') c += 32;
    }
    return str;
    }
};