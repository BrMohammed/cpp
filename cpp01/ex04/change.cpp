#include "change.hpp"
void Change::replace(std::string &src, std::string s1, std::string s2,int begin)
{
    std::string rp_line_front;
    std::string rp_line_back;
    
    if(src.find(s1,begin) != std::string::npos)
    {
        rp_line_front = src.substr(0,src.find(s1,begin));
        rp_line_back = src.substr(src.find(s1,begin) + s1.length());
        rp_line_front += s2 + rp_line_back;
        src = rp_line_front;
        begin = src.find(s1,begin) + s2.length();
        replace(src,s1,s2,begin);
    }
}

Change::Change(std::string fill_name, std::string s1, std::string s2)
{
    creation(fill_name, s1, s2);
}

void Change::creation(std::string fill_name,
        std::string s1, std::string s2)
{
    if (s1 == "" || s2 == "")
        return;
    std::ifstream input(fill_name);
    std::ofstream output(fill_name + ".replace");
    if(input.is_open())
    {
        std::string line = "";
        while(getline(input, line))
        {
            replace(line,s1,s2,0);
            output << line;
            output << '\n';
        }
    }
    input.close();
    output.close();
}

