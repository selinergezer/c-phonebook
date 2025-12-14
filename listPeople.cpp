 #include <iostream>
#include "listPeople.h"

using namespace std;


 void listPeople(const vector<Person>& people) {
      if (people.empty()) {
          cout << "No people found." << endl;
          return;
      }
      int index = 1;
      for (const auto& p : people) {
          cout << index << ") "
              << p.name << ";"
              << p.surname << ";"
              << p.phone << endl;
          index++;
      }
  }

