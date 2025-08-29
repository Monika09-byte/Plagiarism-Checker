#include "plagiarism.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>

std::string readFile(const std::string &filePath) {
    std::ifstream file(filePath);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

double calculateSimilarity(const std::string &text1, const std::string &text2) {
    if (text1.empty() || text2.empty()) return 0.0;

    int matches = 0;
    int length = std::min(text1.size(), text2.size());

    for (int i = 0; i < length; ++i) {
        if (std::tolower(text1[i]) == std::tolower(text2[i])) {
            matches++;
        }
    }

    return (matches / (double)length) * 100.0;
}
