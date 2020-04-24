#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static int cur_id_pf = 0;
static int cur_id_st = 0;

class Person
{
    protected:
    string name;
    int age;
    
public:
    virtual void getdata();
    virtual void putdata();
};

class Professor : public Person {
    int publications;

    void getdata() {
        cin >> name >> age >> publications;
        cur_id_pf++;
    }

    void putdata() {
        cout << name << ' ' << age << ' ' << publications << ' ' << cur_id_pf;
    }
};

class Student : public Person {
    int marks[6];

    void getdata() {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
        cur_id_st++;
    }

    void putdata() {
        int marks_sum = 0;
        for (int i = 0; i < 6; i++) {
            marks_sum += marks[i];
        }
        cout << name << " " << age << " " << marks_sum << " " << cur_id_st;
    }
};



int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
