#include <gtest/gtest.h>
#include "GeneratorPWCpp.cpp"


TEST(GeneratorPWTesty, LoadDataWrites) {
    std::vector<std::string> testString_vector {"000|000 test"};
    std::string stringtest = "000|000 test";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};