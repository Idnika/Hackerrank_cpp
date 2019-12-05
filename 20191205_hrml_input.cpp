#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class dtree {
    public:
    string num_value;
    int num;
    dtree* before;
    dtree* head; // 맨 앞에 있는 dtree
    dtree* nextarray[20]; // 다음 자식에 대한 걸 
    int nextarrayindex;
    bool open;
    dtree(string a) {
        num_value = a;
        nextarrayindex = 0;
        for (int i = 0; i < 20; i++) {
            nextarray[i] = NULL;
        }
        open = true;
    }
};

class damn {
    public:
    vector<string> value;
    vector<string> name;
    int valuenum;
    int namenum;
    damn() {
        valuenum = -1;
        namenum = -1;
    }
    void set_value(string a) {
        valuenum++;
        value.push_back(a);
    }
    void set_name(string b) {
        namenum++;
        name.push_back(b);
    } 
};

int main() { // main
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a, b;
    int count = a;
    string str;
    dtree* now;
    dtree* ins;
    dtree* ins2;
    damn* insd;
    bool closetag = false;
    string asdf;
    
    vector<damn> v;

    cin >> a;
    cin >> b;

    for (int i = 0; i < a; i++) { // firstfor
        cin >> str;

        if (str[1] == '/') { // 닫는 태그일 때
            str = str.substr(2, str.size() - 3);
            cout << "ending tag " << str << endl; //*****
            cout << "now num " << now->num_value << endl; //*****
            if (now->before != NULL) {
                cout << "Before is ";
                cout << now->before->num_value << endl;
            } else {
                cout << "Before is null " << endl;
                cout << "Now is " << now->num_value << endl;
            }

            // now = now->before;

            if (now != NULL) {
            cout << "now : " << now->num_value << endl;
            cout << "str : " << str << endl;}
            else
            cout << "now : NULL" << endl;

            
            
            if (now->num_value == str) {
                cout << "Well done" << endl;
                
                now = now->before;
                asdf = now->num_value;
                // ????
                /* 컴파일에러 왜뜸
                now->nextarrayindex++; 돌겠네 */
            } else {
                cout << "Error!" << endl;
            }

            

            cout << endl;
        } else { // 여는 태그일 시

            // number 처리
            str = str.substr(1); // get the num_value
            
            if (count == 0) // is this first dtree?
            {
                now = new dtree(str); // get first num;
                now->head = now; // as it is the first dtree, header is itself
                now->before = NULL;
                now->num = count; // it is first dtree!
                count++; // count = 1
            } else { // second~ dtree. counts starts from 2; count is order.
                // 입력받을때는 compare 생각하지 말자
                ins = new dtree(str);
                cout << "now: " << now->num_value << endl;
                ins->before = now;
                //now->nextarray[now->nextarrayindex] = ins; // 이거 ins 에 계속 반영되는거맞나?
                // head 는 고정
                count++; // nth element
                ins->num = count; 
                now->nextarray[now->nextarrayindex] = ins; // 이거 ins 에 계속 반영되는거맞나?
                now = ins;
            }
            // number 처리 닫음

            cout << "number: " << now->num_value << endl; //*****

            
            // value 처리
            insd = new damn; // damn 생성

            //for(int i = 0; i < 20; i++) {
            while(closetag == false) { // closetag가 거짓인 동안 value/attribute 입력 반복
                cin >> str; // value받아오기
                insd->set_name(str); // save value
                cout << "insd name: " << insd->name[insd->namenum] << endl; //*****
                cin >> str; // =
                cin >> str;
                if (str[str.size() - 1] == '>') {
                    closetag = true;
                    str = str.substr(1, str.size() - 3);
                    cout << str << endl; //*****
                    insd->set_value(str);
                    cout << "insd value: " << insd->value[insd->valuenum] << endl; //*****
                } else {
                    str = str.substr(1, str.size() - 2);
                    cout << str << endl; //*****
                    insd->set_value(str);
                }
            }
            

            v.push_back(*insd);
            
            cout << "Vector pushed: " << endl;

            cout << "v" << v.size() << " number: " << now->num_value << endl;
            cout << "v" << v.size() << " name: " << v[count - 1].name[0] << endl;
            cout << "v value: " << v[count - 1].value[0] << endl;
            cout << "count : " << count << endl;
            cout << endl;
            
            //value 처리에서 runtime error
            closetag = false;
        }
    } //firstfor

    return 0;
}// main
