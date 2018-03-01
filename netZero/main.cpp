//George Strauch
//promps user for an interger
//tells the user if it is positive or negative
// 03/01/2018


#include <iostream>
using namespace std;

int main() {

    int intInput = 0;

    cout << "enter an interger" << endl;
    cin >> intInput;

    if(intInput > 0){       // tests for greater than 0
        cout << "positive";
    }
    else if(intInput < 0){  //tests for less than 0
        cout << "negative";
    }
    else{                   //can only be zero if not greater that or less than 0
        cout << "zero";
    }

    return 0;

}