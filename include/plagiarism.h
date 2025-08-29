#ifndef PLAGIARISM_H
#define PLAGIARISM_H

#include <string>
#include <vector>

double calculateSimilarity(const std::string &text1, const std::string &text2);
std::string readFile(const std::string &filePath);

#endif
