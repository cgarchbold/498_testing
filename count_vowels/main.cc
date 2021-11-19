#include <iostream>
#include <string>

#include "count_vowels.h"

int main()
{
    std::string line;

    std::cerr << "Enter a line: " << std::flush;

    while (std::getline(std::cin, line)) {

        std::cout << "Vowels in '" << line << "': "
                  << count_vowels(line.c_str()) << std::endl;

        std::cerr << "Enter a line: " << std::flush;
    }

    std::cerr << std::endl;
    return 0;
}
