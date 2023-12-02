#include "doctor.h"
#include <string>
#include <iostream>
using namespace std;

Doctor::Doctor()
{
  name = "";
  age = 0;
}

Doctor::Doctor(string docName, int docAge)
{
  name = docName;
  age = docAge;
}

string Doctor::getName() const
{
  return name;
}

void Doctor::setName(string newName)
{
  name = newName;
}

int Doctor::getAge() const
{
  return age;
}

void Doctor::setAge(int newAge)
{
  age = newAge;
}
