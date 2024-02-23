#include<bits/stdc++.h>
#include"CMP_header.h"
using namespace std;
int main()
{
   // system("CLS");
    cout << "Complex number Multiplication: " << endl;
    std::ifstream inputfile("/home/ee212766/Complex_number_with_diffrent_test_case/data.txt");

    if (!inputfile.is_open())
    {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    std::vector<std::string> readlines = read_lines_to_vector("/home/ee212766/Complex_number_with_diffrent_test_case/data.txt");

    std::vector<std::string> Addtiondata;
    
    extract_data(readlines ,Addtiondata);

    if (Addtiondata.size() % 4 != 0)
    {
        std::cout << "Insuffisent Data to Perfrom The Complex Number addition" << endl;
        return 1;
    }

    ComplexAddition(Addtiondata);
    return 0;
}