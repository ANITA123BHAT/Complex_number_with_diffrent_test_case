#ifndef CMP_HEADER_H
#define CMP_HEADER_H
#include<bits/stdc++.h>
using namespace std;
 
struct Complex
{
    double real;
    double imag;
}; 
bool checkspecialchar(string str, size_t start, size_t end); 
std::vector<std::string> read_lines_to_vector(const std::string &file_path);
bool extract_data(const  std::vector<std::string>& readlines, std::vector<std::string>& Addtiondata);
void ComplexAddition(std::vector<std::string> Addtiondata);

#endif
