#include <iostream>
#include "ArabicToRomanNumeralsConverter.h"

int main(int argc, char *argv[])
{
    unsigned int arabicNumber;
    std::cout << "Please enter an arabic number(>0):";
    std::cin >> arabicNumber;
    std::cout << arabicNumber <<" -> "<< convertArabicNumberToRomanNumeral(arabicNumber) << std::endl;
    return 0;
}


