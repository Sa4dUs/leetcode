// https://leetcode.com/problems/length-of-last-word/description/

#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int cnt = 0;
    auto it = s.end() - 1;

    while (*it == ' ')
        --it;

    while (it >= s.begin() && *it-- != ' ')
        ++cnt;

    return cnt;
}

int main() {
    string s = "a";

    int output = lengthOfLastWord(s);
    cout << output;
}
