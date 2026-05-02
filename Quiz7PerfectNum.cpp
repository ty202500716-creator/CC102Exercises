#include <iostream>
#include <fstream>
using namespace std;


bool isPerfect(int num) {
    if (num <= 1)
        return false;

    int sum = 1; 

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile) {
        cout << "Error opening file" << endl;
        return 1;
    }

    int number;

    
    while (inputFile >> number) {
        if (isPerfect(number)) {
            outputFile << number << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Perfect numbers" << endl;

    return 0;
}