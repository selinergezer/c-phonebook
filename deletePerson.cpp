#include <iostream>
#include "deletePerson.h"

using namespace std;


void deletePerson(vector<Person>& people) {
    if (people.empty()) {
        cout << "No people to delete..." << endl;
        return;
    }
    string name;
    cout << "Enter name to delete:";
    cin >> name;
    for (auto it = people.begin(); it != people.end(); it++) {
        if (it->name == name) {
                cout<<"Found: "<<it->name<<";"<<it->name<<";"<<it->phone<<endl;

        char confirm;
        cout<<"Are you sure you want to delete?(y/n): ";
        cin>>confirm;

        if(confirm=='y'|| confirm=='Y'){
           people.erase(it);
           cout << "Person deleted successfully!" << endl;
        }else{
        cout<<"Delete cancelled."<<endl;
        }
            return;
        }
    }
    cout << "Person not found" << endl;
}
