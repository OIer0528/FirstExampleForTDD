#include "ArabicToRomanNumeralsConverter.h"
#include <array>

struct ArabicToRomanMapping
{
  unsigned int arabicNumber;
  std::string romanNumeral;
};

constexpr std::size_t numberOfMappings{13};
using ArabicToRomanMappingArray = std::array<ArabicToRomanMapping, numberOfMappings>;

const ArabicToRomanMappingArray arabicToRomanMappingArray{
    {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"},
    },
};

std::string convertArabicNumberToRomanNumeral(unsigned int arabicNumber)
{
  std::string romanNumeral;
  for (const auto &mapping : arabicToRomanMappingArray)
  {
    while (arabicNumber >= mapping.arabicNumber)
    {
      romanNumeral += mapping.romanNumeral;
      arabicNumber -= mapping.arabicNumber;
    }
  }
  return romanNumeral;
}
