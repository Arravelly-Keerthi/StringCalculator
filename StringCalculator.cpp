#include <iostream>
#include <fstream>
#include <string>
#include "./String_add.h"
#include<gtest/gtest.h>
using namespace std;

int main() {
    string inputString;
        cout << "Enter the string: ";
        cin >> inputString;
        cout << "Result: " << StringCalculator::add(inputString) << endl;
        testing::InitGoogleTest();
        return RUN_ALL_TESTS();
    return 0;
}