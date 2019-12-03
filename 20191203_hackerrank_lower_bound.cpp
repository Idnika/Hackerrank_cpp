#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int index;
    cin >> index;
    int ins;
    bool bins = false;
    int kindex;

    vector<int> myints;

    for (int i = 0; i < index; i++) {
        cin >> ins;
        myints.push_back(ins);
    }

    sort (myints.begin(), myints.end());

    vector<int>::iterator low;

    cin >> index;

    for (int j = 0; j < index; j++) {
        cin >> ins;

        /* for (int k = 0; k < myints.size(); k++) {
            if (myints[k] == ins) { bins = true; kindex = k + 1; break; }
        }

        if (bins == true) {
            cout << "Yes " << kindex << endl;
        } else {
            up = upper_bound(myints.begin(), myints.end(), ins);
            kindex = (up - myints.begin()) + 1;
            cout << "No " << kindex << endl;
        }
        bins = false; */

        low = lower_bound (myints.begin(), myints.end(), ins);
        kindex = (low - myints.begin()) + 1;
        if (myints[(low - myints.begin())] != ins) {

            cout << "No " << kindex << endl;
        } else {
            cout << "Yes " << kindex << endl;
        }
    }
    return 0;
}
