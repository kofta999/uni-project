#include "patient.h"
#include <string>
#include <iostream>
using namespace std;

Patient::Patient()
{
  name = "";
  age = 0;
}

Patient::Patient(string patientName, int patientAge)
{
  name = patientName;
  age = patientAge;
}

string Patient::getName() const
{
  return name;
}

void Patient::setName(string newName)
{
  name = newName;
}

int Patient::getAge() const
{
  return age;
}

void Patient::setAge(int newAge)
{
  age = newAge;
}

string Patient::getDiagnosis() const
{
  return diagnosis;
}

void Patient::setDiagnosis(string newDiagnosis)
{
  diagnosis = newDiagnosis;
}

void Patient::setMedicalHistory(string newMedicalHistory)
{
  medicalHistory = newMedicalHistory;
}

string Patient::getMedicalHistory() const
{
  return medicalHistory;
}