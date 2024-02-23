#include<bits/stdc++.h>
#include"CMP_header.h"
using namespace std;
bool checkspecialchar(string str, size_t start, size_t end)
{

    for (size_t i = start; i < end; i++)
    {
        char c = str[i];
        // cout << c <<" ";
        if (!(isalnum(c)) && c != '.' && c != '-' && c != ' ')
            return true;
    }
    return false;
}

std::vector<std::string> read_lines_to_vector(const std::string &file_path)
{
    std::vector<std::string> lines;
    std::ifstream file(file_path);
    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            lines.push_back(line);
        }
        file.close();
    }
    return lines;
}

bool extract_data(const  std::vector<std::string>& readlines, std::vector<std::string>& Addtiondata)
{
    for (const std::string &line : readlines)
    {

        std::size_t startpos = line.find('(');
        std::size_t endpos = line.find(')');
        std::string data; //"1 2"

        
        data = line.substr(startpos + 1, endpos - startpos - 1);
        std::stringstream data_ss(data); //"1" "2"

        if (checkspecialchar(line, startpos + 1, endpos) || line.find('#') == 0)
        {
            // cout << "Skiiping the Line" << endl ;
            continue;
        }

        string a, b;

        if (data_ss >> a >> b)
        {
            // cout << a << " " << b << " ";
            Addtiondata.push_back(a);
            Addtiondata.push_back(b);
        } 
    }
    return true;
}
void ComplexAddition(std::vector<std::string> Addtiondata)
    {
        for (std::size_t i = 0; i < Addtiondata.size(); i = i + 4)
    {
        double a = stod(Addtiondata[i]);
        double b = stod(Addtiondata[i + 1]);
        double c = stod(Addtiondata[i + 2]);
        double d = stod(Addtiondata[i + 3]);
        cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;

        Complex result;
        result.real = (a * c) - (b * d);
        result.imag = (a * d) + (b * c);

        cout << "Result: "<<"("
                << result.real  <<"+ "<< result.imag <<"i" <<")"<<endl;
        cout << "****************************" << endl;
    }
    }
