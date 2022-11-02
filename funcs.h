#pragma once

std::string solve(std::string encrypted_string);

void printVec(std::vector<double> v);

std::vector<double> getFrequencies(std::string s);

std::vector<double> shiftFreq(std::vector<double> v, int shift);

double calcDistance (std::vector<double> v1, std::vector<double> v2);