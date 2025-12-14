#include <iostream>
#include <vector>
#include "Person.h"
#include"addPerson.h"
#include"deletePerson.h"
#include "listPeople.h"
#include "searchPerson.h"
#include "showMenu.h"
#include "loadSave.h"

using namespace std;

    void addPerson(vector<Person>& people);
    void listPeople(const vector<Person>& people);
    void searchPerson(vector<Person>& people);
    void deletePerson(vector<Person>& people);
    void loadFromFile(vector<Person>&people);
    void saveToFile(vector<Person>&people);
    void showMenu();

    int main() {

        vector<Person>people;
        int choice;

        loadFromFile(people);

        do {
            showMenu();
            cout << "What is your choice: ";
            cin >> choice;

            if (choice == 1) {
                addPerson(people);
            }
            else if (choice == 2) {
                listPeople(people);
            }
            else if (choice == 3) {
                searchPerson(people);
            }
            else if (choice == 4) {
                deletePerson(people);
            }
        } while (choice != 0);

        saveToFile(people);
        return 0;
    }
