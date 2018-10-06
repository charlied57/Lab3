#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int inputCheck() {
    if (cin.fail()) {
        cout << "Please input a valid input" << endl;
        cin.clear();
        cin.ignore();
        return -3;
    }
    else{
        return -2;
    }
}

void problemFour (){

}



void problemThree (){
    long sum = 0;
    long n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck() == -3);
    for (int i = 1; i <= n; i++) {
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
    int temp = 1;
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
    int n = 0;
    do{
        cout << "Input n: ";
        cin >> n;
    }
    while(inputCheck() == -3);
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "\nThe sum of 1 to " << n << " is " << sum << endl;
}

int main() {
    int testSelection;
    while (testSelection != -1) {
        cout << endl << "Which Problem would you like to run? (1-8): " << endl;
        cout << "To exit type '-1'" << endl;
        do{
            cout << ">> ";
            cin >> testSelection;
        }
        while(inputCheck() == -3);
        if (testSelection == 1) {
            problemOne();
        }
        if (testSelection == 2) {
            problemTwo();
        }
        if (testSelection == 3) {
            problemThree();
        }
//        if (testSelection == 1) {
//            problemFour();
//        }
//        if (testSelection == 1) {
//            problemFive();
//        }
//        if (testSelection == 1) {
//            problemSix();
//        }
//        if (testSelection == 1) {
//            problemSeven();
//        }
//        if (testSelection == 1) {
//            problemEight();
//        }
    }
    cout << "End of code";
    return 0;
}