#include <string>
using namespace std;

class Doctor
{
private:
  int age;
  string name;

public:
  Doctor(string name, int age);
  string getName() const;
  int getAge() const;
  void setName(string newName);
  void setAge(int newAge);
};