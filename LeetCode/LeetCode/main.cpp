//
//  main.cpp
//  LeetCode
//
//  Created by Li, Jin Hui on 2020/8/13.
//  Copyright © 2020 HalfRoad Software Inc. All rights reserved.
//

#include <iostream>

using namespace std;

string multiply(char *num1, char *num2);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    string multipliedNumber = multiply("10", "20");
//
//    printf("Multiplied Number = %s\n", multipliedNumber.c_str());
    
    string multipliedNumber = multiply("10", "20");
    
    printf("Multiplied Number = %s\n", multipliedNumber.c_str());
    
    int i;
    scanf("%d", &i);
    
    return 0;
}

string multiply (string num1, string num2) {
    
    int number1 = stoi(num1);
    int number2 = stoi(num2);
    
    int multipliedNumber = number1 * number2;
    
    return to_string(multipliedNumber);
}

string multiply(char *num1, char *num2) {
    
    int number1 = 0;
    
    for (int i = 0; i < strlen(num1); i ++) {
        if (i == 0) {
            number1 = num1[i] - 48;
        } else {
            number1 = number1 * 10 + num1[i] - 48;
        }
    }
    
    int number2 = 0;
    
    for (int i = 0; i < strlen(num2); i ++) {
        if (i == 0) {
            number2 = num2[i] - 48;
        } else {
            number2 = number2 * 10 + num2[i] - 48;
        }
    }
    
    int number = number1 * number2;
    
    return to_string(number);
}
