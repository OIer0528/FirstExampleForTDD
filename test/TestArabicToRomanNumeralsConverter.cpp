#include <gtest/gtest.h>
#include "src/ArabicToRomanNumeralsConverter.h"

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertedTo_I)
{
    ASSERT_EQ("I", convertArabicNumberToRomanNumeral(1));
}
