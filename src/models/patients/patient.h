#include <string>
using namespace std;

class Patient
{
private:
  int age;
  string name;
  string diagnosis;
  string medicalHistory;

public:
  Patient();
  Patient(string patientName, int patientAge);
  string getMedicalHistory() const;
  string getDiagnosis() const;
  string getName() const;
  int getAge() const;
  void setMedicalHistory(string newMedicalHistory);
  void setDiagnosis(string newDiagnosis);
  void setName(string newName);
  void setAge(int newAge);
};