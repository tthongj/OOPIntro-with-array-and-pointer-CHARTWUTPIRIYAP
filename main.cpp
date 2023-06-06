#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int n = (argc - 1) / 3;
  student *pt_std = new student[n];
  int i;

   //./aout monkey 20 3.5 Art 15 2.5
  //*Try to finish  OOPIntro-with-array-and-pointer
  //(Assignment 5--> similar to 4
  for (i = 0; i < n; i++) {
    pt_std[i].set_all(argv[i * 3 + 1], atoi(argv[i * 3 + 2]), atof(argv[i * 3 + 3]));
  }
  
  for (i = 0; i < n; i++) {
    pt_std[i].print_all();
  }

  //Find the student(s) with the highest GPA
  float maxGPA = 0.0;
  for (i = 0; i < n; i++) {
    if (pt_std[i].get_score() > maxGPA) {
      maxGPA = pt_std[i].get_score();
    }
  }

  //Print only students with the highest GPA
  cout << "Highest GPA:" << endl;
  for (i = 0; i < n; i++) {
    if (pt_std[i].get_score() == maxGPA) {
      pt_std[i].print_all();
    }
  }

  delete[] pt_std;

  return 0;
}
