#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int a;
    cin >> a;

    int inst;
    map<string, int> m;
    map<string, int>::iterator it;
    
    string str1;

    for (int i = 0; i < a; i++) {
        cin >> inst;
        switch(inst){
            case 1:
                cin >> str1;
                it=m.find(str1);

                if (it == m.end()) {
                    cin >> inst;
                    m.insert(make_pair(str1, inst));
                } else {
                    cin >> inst;
                    it->second = it->second + inst;
                }
            break;
            case 2:
                cin >> str1;
                m.erase(str1);
            break;
            case 3:
                cin >> str1;
                it = m.find(str1);

                if (it == m.end()) {
                    cout << "0" << endl;
                } else {
                    cout << it->second << endl;
                }
            break;
            default:
            break;
        }
    }
    return 0;
}



