#include <iostream>

void    to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        std::cout << (char)(c - 32);
    else
        std::cout << c;
}

int main(int argc, char **argv)
{
    std::string str;
    int i = 1;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    while (i < argc)
    {
        str = argv[i];
        for (size_t j = 0; j < str.length(); j++)
            to_upper(str[j]);
        i++;
    }
    std::cout << std::endl;
    return 0;
}