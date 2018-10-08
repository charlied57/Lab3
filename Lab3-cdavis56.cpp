#include <iostream>
#include <cmath>
#include <cfloat>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int inputCheck(long n) {
    if (cin.fail() || n < 0) {
        cout << "Please input a valid input" << endl;
        cin.clear();
        cin.ignore();
        return -3;
    }
    else{
        return -2;
    }
}

void problemEight (){
    for (double i = 3.4; i < 4.4; i += 0.2) {
        cout << "i = " << i << endl;
    }
}

void problemSeven (){
    for (float i = 3.4; i < 4.4; i += 0.2) {
        cout << "i = " << i << endl;
    }
}

void problemSix (){
    float sum = 0;
    float n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck(n) == -3);
    for (float i = 1; i <= n; i++) {
        sum = sum + (1 / n);
    }
    sum = sum - 1;
    cout << "The summation of (1/n) -1 is " << sum << endl;
}


void problemFive (){
    double product = 1;
    long n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck(n) == -3);

    for(long i = 1; i <= n; i++){
        product = product * i;
    }
    cout << n << "! is " << product << endl;

    product = 1;
    long temp = 0;
    double prevProd;
    long prevTemp;
    while (product != INFINITY) {
        prevProd = product;
        prevTemp = temp;
        temp = temp + 1;
        product = product * temp;
    }
    cout << "There is an overflow when n is greater than " << prevTemp << " ." << endl;
    cout << "The largest product of 1 to n you can have in a long is " << prevProd << " ." << endl;
}

void problemFour (){
    float product = 1;
    long n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck(n) == -3);

    for(long i = 1; i <= n; i++){
        product = product * i;
    }
    cout << n << "! is " << product << endl;

    product = 1;
    long temp = 0;
    float prevProd;
    long prevTemp;
    while (product != INFINITY) {
        prevProd = product;
        prevTemp = temp;
        temp = temp + 1;
        product = product * temp;
    }
    cout << "There is an overflow when n is greater than " << prevTemp << " ." << endl;
    cout << "The largest product of 1 to n you can have in a long is " << prevProd << " ." << endl;
}

void problemThree (){
    long sum = 0;
    long n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck(n) == -3);
    for (long i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "\nThe sum of 1 to " << n << " is " << sum << endl;

    sum = 0;
    long temp = 1;
    long prevSum;
    long prevTemp;
    while (sum >= 0) {
        prevSum = sum;
        prevTemp = temp;
        sum = sum + temp;
        temp = temp + 1;
    }
    cout << "There is an overflow when n is greater than " << prevTemp << " ." << endl;
    cout << "The largest summation of 1 to n you can have in a long is " << prevSum << " ." << endl;
}

void problemTwo(){
    short sum = 0;
    short temp = 1;
    short prevSum;
    short prevTemp;
    while (sum >= 0) {
        prevSum = sum;
        prevTemp = temp;
        sum = sum + temp;
        temp = temp + 1;
    }
    cout << "There is an overflow when n is greater than " << prevTemp << " ." << endl;
    cout << "The largest summation of 1 to n you can have in a short is " << prevSum << " ." << endl;
}


void problemOne (){
    short sum = 0;
    short n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck(n) == -3);
    for (short i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "\nThe sum of 1 to " << n << " is " << sum << endl;
}

int main() {
    int testSelection = 0;
    while (testSelection != -1) {
        cout << endl << "Which Problem would you like to run? (1-8): " << endl;
        cout << "To exit type '-1'" << endl;
        do{
            cout << ">> ";
            cin >> testSelection;
            if(testSelection == -1){
                break;
            }
        }
        while(inputCheck(testSelection) == -3);
        if (testSelection == 1) {
            problemOne();
        }
        if (testSelection == 2) {
            problemTwo();
        }
        if (testSelection == 3) {
            problemThree();
        }
        if (testSelection == 4) {
            problemFour();
        }
        if (testSelection == 5) {
            problemFive();
        }
        if (testSelection == 6) {
            problemSix();
        }
        if (testSelection == 7) {
            problemSeven();
        }
        if (testSelection == 8) {
            problemEight();
        }
    }
    cout << "End of code";
    return 0;
}