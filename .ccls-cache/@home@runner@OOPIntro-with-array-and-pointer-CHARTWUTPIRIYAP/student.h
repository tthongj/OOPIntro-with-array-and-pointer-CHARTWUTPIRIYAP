#ifndef student_h
#define student_h

#include <iostream>
using namespace std;

class student {
private:
  string name;
  int age;
  float score;

public:
  student() {
    name = "";
    age = 0;
    score = 0.0;
  }

  student(string n, int a, float s) {
    name = n;
    age = a;
    score = s;
  }

  void set_name(string n) {
    name = n;
  }

  void set_age(int a) {
    age = a;
  }

  void set_score(float s) {
    score = s;
  }

  string get_name() {
    return name;
  }

  int get_age() {
    return age;
  }

  float get_score() {
    return score;
  }

  void print_all() {
    cout << "---Name: " << name << "---" << endl;
    cout << "Age: " << age << endl;
    cout << "Score: " << fixed << setprecision(2) << score << endl;
  }
};

#endif
