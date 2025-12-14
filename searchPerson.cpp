#include <iostream>
#include <algorithm>
#include <cctype>
#include "searchPerson.h"

using namespace std;

string tolower(const string& text){
    string result =text;
    for(char& c:result){
     c = tolower(static_cast<unsigned char>(c));
   }
  return result;
}

void searchPerson(vector<Person>& people) {
        if (people.empty()) {
            cout << "No people to search..." << endl;
            return;
        }

        string key;
        cout << "Enter name, surname or phone to search:";
        cin >> key;

        key = tolower(key);
        bool found = false;

        for (const auto& p : people) {
            if (tolower(p.name) == key || tolower(p.surname) == key || p.phone ==key) {
                cout << p.name << ";" << p.surname << ";" << p.phone << endl;
                found = true;
            }

        }
        if (!found) {
            cout << "Person not found..." << endl;
        }

    }
