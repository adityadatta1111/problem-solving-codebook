#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int strs_size = strs.size();
        string prefix = strs[0]; // Assuming the first string as the prefix here

        if (strs.empty()) {
            return "";
        } else {
            for (int i = 1; i < strs_size; ++i) {
                while (strs[i].find(prefix) != 0) {
                    prefix = prefix.substr(0, prefix.size() - 1);

                    if (prefix.empty()) {
                        return "";
                    }
                }
            }
            return prefix;
        }
    }
};