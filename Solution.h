#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <climits>
#include <algorithm>

class Solution {
public:
    int minCharacters(std::string a, std::string b) {
        int arr[26] = { 0 };
        int brr[26] = { 0 };
        int aLen = a.length(), bLen = b.length(), minOps = INT_MAX;
        
        for (int i = 0; i < aLen; i++) {
            arr[a.at(i) - 'a']++;
        }
        for (int i = 0; i < bLen; i++) {
            brr[b.at(i) - 'a']++;
        }
        
        int aTimes = 0, bTimes = 0;
        for (int i = 0; i < 26; i++) {
            aTimes += arr[i];
            bTimes += brr[i];
            minOps = std::min(
                std::min(aLen - aTimes + bTimes, bLen - bTimes + aTimes),
                std::min(minOps, aLen - arr[i] + bLen - brr[i])
            );
        }
        return minOps;
    }
};

#endif