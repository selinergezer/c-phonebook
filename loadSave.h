#ifndef LOADSAVE_H
#define LOADSAVE_H

#include <vector>
#include "Person.h"

using namespace std;

void loadFromFile(vector<Person>&people);
void saveToFile(vector<Person>&people);

#endif // LOADSAVE_H
