#include <iostream>
#include <iomanip>
#include "student.h"

int main(int argc, char* argv[]) {
  int n = (argc - 1) / 3;
  student *pt_std = new student[n];
  int i;

  // Set student information using command-line arguments
  for (i = 0; i < n; i++) {
    pt_std[i].set_name(argv[i * 3 + 1]);
    pt_std[i].set_age(atoi(argv[i * 3 + 2]));
    pt_std[i].set_score(atof(argv[i * 3 + 3]));
  }

  // Print information for each student
  for (i = 0; i < n; i++) {
    pt_std[i].print_all();
  }

  // Set and print student information in separate loops
  for (i = 0; i < n; i++) {
    string name;
    int age;
    float score;

    cout << "Enter name for student " << i + 1 << ": ";
    cin >> name;
    cout << "Enter age for student " << i + 1 << ": ";
    cin >> age;
    cout << "Enter score for student " << i + 1 << ": ";
    cin >> score;

    pt_std[i].set_name(name);
    pt_std[i].set_age(age);
    pt_std[i].set_score(score);
  }

  for (i = 0; i < n; i++) {
    pt_std[i].print_all();
  }

  // Find the student(s) with the highest GPA
  float maxGPA = 0.0;
  for (i = 0; i < n; i++) {
    if (pt_std[i].get_score() > maxGPA) {
      maxGPA = pt_std[i].get_score();
    }
  }

  // Print only students with the highest GPA
  cout << "Students with the highest GPA:" << endl;
  for (i = 0; i < n; i++) {
    if (pt_std[i].get_score() == maxGPA) {
      pt_std[i].print_all();
    }
  }

  delete[] pt_std;

  return 0;
}
