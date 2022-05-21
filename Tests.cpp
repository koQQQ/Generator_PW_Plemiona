#include <gtest/gtest.h>
#include "GeneratorPWCpp.cpp"


TEST(GeneratorPWTesty, CheckingLoadDataWithCoorrectLineWithCoords) {
    std::vector<std::string> testString_vector {"000|000 test"};
    std::string stringtest = "000|000 test";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};

TEST(GeneratorPWTesty, CheckingLoadDataWithEmptyStringShouldNotLoadThisDataAndReturnedVectorShouldBeEmpty) {
    std::vector<std::string> testString_vector;
    std::string stringtest = "";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};

TEST(GeneratorPWTesty, CheckingLoadDataWithTwoLettersShouldReturnEmptyVector) {
    std::vector<std::string> testString_vector;
    std::string stringtest = "12";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};

TEST(GeneratorPWTesty, CheckingLoadDataWithSixLettersShouldReturnEmptyVector) {
    std::vector<std::string> testString_vector;
    std::string stringtest = "12";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};

TEST(GeneratorPWTesty, ChecikngLoadNotCorrectCoordsReturnedVectorShouldBeEmpty) {
    std::vector<std::string> testString_vector;
    std::string stringtest = "1234567";
    Writes writes;
    writes.load(stringtest);
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};







/*TEST(GeneratorPWTesty, LoadPlayers) {
    Players players;
    std::string TestPlayerone = "TestPlayer";
    std::string TestPlayerTwo = "TestPlayertwo"
    EXPECT_TRUE(writes.returnWrites() == testString_vector);
};*/