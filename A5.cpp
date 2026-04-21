#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    ofstream file("original.txt");

    file << "One" << endl;
    file << "Two" << endl;
    file << "Three" << endl;
    file << "Four" << endl;
    file << "Five" << endl;
    file << "Six" << endl;

    file.close();

    ifstream readFile("original.txt");
    vector<string> words;  
    string line;

    while (getline(readFile, line)) {
        words.push_back(line);
    }

    readFile.close();

    sort(words.begin(), words.end());

    ofstream sorted("sorted.txt");

    for (string w : words) {
        sorted << w << endl;
    }

    sorted.close();

    cout << "Files created successfully!" << endl;

    return 0;
}