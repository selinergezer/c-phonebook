#include <iostream>
#include "addPerson.h"

void addPerson(vector<Person>& people) {
        Person p;
        cout << "Enter name: ";
        cin >> p.name;
        cout << "Enter surname: ";
        cin >> p.surname;
        cout << "Enter phone: ";
        cin >> p.phone;

        people.push_back(p);
        cout << "Person added successfully!" << endl;
    }
