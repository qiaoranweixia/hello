#include <iostream>
#include <string>
#include "Solution.h"

int main() {
    Solution sol;
    
    // 测试用例
    std::string a = "aba";
    std::string b = "caa";
    
    int result = sol.minCharacters(a, b);
    std::cout << "minCharacters(\"" << a << "\", \"" << b << "\") = " << result << std::endl;
    
    // 更多测试
    std::cout << sol.minCharacters("a", "abcdefghijklmnopqrstuvwxyz") << std::endl;
    std::cout << sol.minCharacters("leetcode", "etco") << std::endl;
    
    return 0;
}