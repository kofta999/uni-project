#include <doctor.h>
#include <string>
using namespace std;

Doctor::Doctor(string name, int age)
{
  name = name;
  age = age;
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
