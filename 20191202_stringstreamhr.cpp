#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    vector<int> intget;
    char ch;
    int ins;
    while (ss.rdbuf()->in_avail() != 0) {
        ss >> ins >> ch;
        intget.push_back(ins);
    }

    return intget;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

