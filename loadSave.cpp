#include <iostream>
#include <fstream>
#include <sstream>
#include "loadSave.h"

using namespace std;

void loadFromFile(vector<Person>&people){
    ifstream file("people.txt");

    if(!file.is_open()){
        return;
    }

    string line;
    while (getline(file,line)){
        string name,surname,phone;
        stringstream ss(line);

        if(getline(ss,name,';')&& getline(ss,surname,';')&&getline(ss,phone)){
            Person p;
            p.name==name;
            p.surname=surname;
            p.phone=phone;

            people.push_back(p);
        }
    }

    file.close();
}

void saveToFile(vector<Person>&people){
    ofstream file ("people.txt");

    if(!file.is_open()){
        cout<<"File could not be opened for writing."<<endl;
        return;
    }

    for(const auto&p:people){
        file<<p.name<<";"<<p.surname<<";"<<p.phone<<endl;
    }
    file.close();
}
