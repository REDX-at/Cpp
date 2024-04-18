#include "main.hpp"

int main()
{
    std::string type;


    while (true)
    {
        std::cout << "Enter the type of student or exit ..." << std::endl;
        std::cin >> type;
        if (type == "exit")
            break;
        student student1;
        std::string information;
        std::cout << "Fill the form < Name ID Age >" << std::endl;
        std::cout << "Name : ";
        std::cin >> information;
        student1.student_name = information;
        std::cout << "ID : ";
        std::cin >> information;
        student1.student_id = information;
        std::cout << "Age : ";
        std::cin >> information;
        student1.student_age = information;
    }
    std::cout << "Nothign to do." << std::endl;
}