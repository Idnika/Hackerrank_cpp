#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    // 살려주세요

    vector<int> v;
    int index;
    int e_num;
    int e_num2;

    cin >> index;

    for (int i = 0; i < index; i++) {
        cin >> e_num;
        v.push_back(e_num);
    }

    cin >> e_num;

    v.erase(v.begin() + e_num - 1);

    cin >> e_num;
    cin >> e_num2;

    v.erase(v.begin() + e_num - 1, v.begin() + e_num2 - 1);

    int count = v.size();

    cout << count << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
