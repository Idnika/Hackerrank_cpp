#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<string> value;
    vector<string> name;
    int a, b;
    string ins;
    string ins2;
    char ch[10];
    int inst;
    stringstream ss;
    string ins3;
    int found;
    string ins4;
    int inst2;

    string aa = "<tag";
    string bb = "</tag";

    cin >> a >> b;
    a = a / 2;

    for (int i = 0; i < a; i++) {
        cin >> ins;

        if (ins.size() <= 6) {
            //cout << "got in!" << endl; //
            if (ins.substr(0, 4) != aa) { cout << "Input again" << endl; }
            ins2 = ins.substr(4, ins.size() - 1);
            ss << ins2;
            //cout << ins2 << endl; //2
            //cout << ins << endl; //3
            ss >> inst;
            //cout << inst << endl; //5
            inst = inst - 1;
            //cout << inst << endl; //6
            ss.clear();
            
            cin >> ins;
            //cout << ins << endl; //
            name.push_back(ins);
            //cout << name[inst] << endl; //

            cin >> ins;
            //cout << ins << endl; // asdf
            if (ins != "=") cout << "Error found!" << endl;

            cin >> ins;
            //cout << ins << endl; // asdf
            ins2 = ins.substr(1, ins.size() - 3);
            //cout << ins2 << endl; // asdf
            value.push_back(ins2);
            //cout << value[inst] << endl; // asdf
        }
    }  
    
    for (int i = a - 1; i >= 0; i--) {
        cin >> ins;

        if (ins.size() > 8) { cout << "Number over!" << endl; }

        ins2 = ins.substr(0, 5);
        if (ins2 != bb) { cout << "Close the tag." << endl; }
        ins2 = ins.substr(5, ins.size() - 6);
        //cout << ins2 << endl; //
        ss << ins2;
        ss >> inst;
        //cout << inst << endl; //
        if (i != inst - 1) { cout << "Ending tag error." << endl; }
        ss.clear();
    }

    for (int i = 0; i < b; i++) {
        cin >> ins;
        ins3 = ins;

        found = ins.find(".");
        //cout << found << endl; // 

        while(1) {
            if(found < 0) break;
            ins3 = ins3.substr(found + 1);
            found = ins3.find(".");
            //cout << ins3 << endl; //
        }

        found = ins3.find("~");
        cout << found << endl;; //

        ins4 = ins3.substr(found + 1);
        cout << ins4 << endl;

        inst = ins4.size() + 1;
        inst2 = ins3.size() - inst - 3;
        cout << inst2 << endl; //

        ins3 = ins3.substr(3, inst2);

        ss << ins3;
        ss >> inst2;
        ss.clear();
        cout << inst2 << endl;//

        if (name[inst2] == ins4) {
            cout << value[inst2] << endl;
        } else {
            cout << "Not Found!" << endl;
        }

        /*
        ins2 = ins3.substr(3, found - 3);
        cout << ins2 << "   adsf" << endl;//
        ss << ins2;
        ss >> inst;
        cout << inst << endl; //
        ss.clear();
        */
    }

    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<string> value;
    vector<string> name;
    int a, b;
    string ins;
    string ins2;
    char ch[10];
    int inst;
    stringstream ss;
    string ins3;
    int found;
    string ins4;
    int inst2;

    string aa = "<tag";
    string bb = "</tag";

    cin >> a >> b;
    a = a / 2;

    for (int i = 0; i < a; i++) {
        cin >> ins;

        if (ins.size() <= 6) {
            //cout << "got in!" << endl; //
            if (ins.substr(0, 4) != aa) { cout << "Input again" << endl; }
            ins2 = ins.substr(4, ins.size() - 1);
            ss << ins2;
            //cout << ins2 << endl; //2
            //cout << ins << endl; //3
            ss >> inst;
            //cout << inst << endl; //5
            inst = inst - 1;
            //cout << inst << endl; //6
            ss.clear();
            
            cin >> ins;
            //cout << ins << endl; //
            name.push_back(ins);
            //cout << name[inst] << endl; //

            cin >> ins;
            //cout << ins << endl; // asdf
            if (ins != "=") cout << "Error found!" << endl;

            cin >> ins;
            //cout << ins << endl; // asdf
            ins2 = ins.substr(1, ins.size() - 3);
            //cout << ins2 << endl; // asdf
            value.push_back(ins2);
            //cout << value[inst] << endl; // asdf
        }
    }  
    
    for (int i = a - 1; i >= 0; i--) {
        cin >> ins;

        if (ins.size() > 8) { cout << "Number over!" << endl; }

        ins2 = ins.substr(0, 5);
        if (ins2 != bb) { cout << "Close the tag." << endl; }
        ins2 = ins.substr(5, ins.size() - 6);
        //cout << ins2 << endl; //
        ss << ins2;
        ss >> inst;
        //cout << inst << endl; //
        if (i != inst - 1) { cout << "Ending tag error." << endl; }
        ss.clear();
    }

    for (int i = 0; i < b; i++) {
        cin >> ins;
        ins3 = ins;

        found = ins.find(".");
        //cout << found << endl; // 

        while(1) {
            if(found < 0) break;
            ins3 = ins3.substr(found + 1);
            found = ins3.find(".");
            //cout << ins3 << endl; //
        }

        found = ins3.find("~");
        cout << found << endl;; //

        ins4 = ins3.substr(found + 1);
        cout << ins4 << endl;

        inst = ins4.size() + 1;
        inst2 = ins3.size() - inst - 3;
        cout << inst2 << endl; //

        ins3 = ins3.substr(3, inst2);

        ss << ins3;
        ss >> inst2;
        ss.clear();
        cout << inst2 << endl;//

        if (name[inst2] == ins4) {
            cout << value[inst2] << endl;
        } else {
            cout << "Not Found!" << endl;
        }

        /*
        ins2 = ins3.substr(3, found - 3);
        cout << ins2 << "   adsf" << endl;//
        ss << ins2;
        ss >> inst;
        cout << inst << endl; //
        ss.clear();
        */
    }

    return 0;
}
