// BEGIN: ed8c6549bwf9
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(HelloWorldTest, PrintsHelloWorld) {
    testing::internal::CaptureStdout();
    printf("Hello World!\n");
    std::cout << "Hello World!\n";
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Hello World!\nHello World!\n");
}
// END: ed8c6549bwf9