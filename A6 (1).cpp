#include <iostream>
#include <fstream>
using namespace std;

void countPrimeNumbers() {
    ifstream file("NUM.txt");
    int num, primeCount = 0;
    bool isPrime;

    if (!file) {
        cout << "Unable to open file." << endl;
        return;
    }

    while (file >> num) {
        if (num < 2) {
            continue;
        }

        isPrime = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeCount++;
        }
    }

    file.close();

    cout << "Number of prime numbers in file: " << primeCount << endl;
}

int main() {
    countPrimeNumbers();
    return 0;
}