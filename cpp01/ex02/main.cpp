#include <iostream>
#include <string>

// lesson about stringPTR and stringREF

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strPTR = &str;
    std::string& strREF = str;

    std::cout << "Memory address" << std::endl;
    std::cout << std::endl;
    std::cout << "str    address: " << &str << std::endl;
    std::cout << "strPTR address: " << strPTR << std::endl;
    std::cout << "strREF address: " << &strREF << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Values" << std::endl;
    std::cout << "str   : " << str << std::endl;
    std::cout << "strPTR: " << *strPTR << std::endl;
    std::cout << "strREF: " << strREF << std::endl;


    return 0;
}