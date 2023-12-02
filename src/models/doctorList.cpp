#include "doctorList.h"
#include <iostream>

DoctorList::DoctorList()
{
  first = nullptr;
  last = nullptr;
  count = 0;
}

int DoctorList::getListLength() const
{
  return count;
}

void DoctorList::insertDoctor(Doctor *newDoctor)
{
  DoctorNode *newDoc = new DoctorNode();
  newDoc->doc = newDoctor;

  if (count == 0)
  {
    first = newDoc;
    last = newDoc;
    count = 1;
  }
  else
  {
    last->nextDoc = newDoc;
    newDoc->prevDoc = last;
    last = newDoc;
    count++;
  }
}

void DoctorList::listDoctors() const
{
  DoctorNode *temp = first;
  int counter = 0;
  while (temp != nullptr)
  {
    counter++;
    std::cout << "Doctor #" << counter << ":\n\t Name: " << temp->doc->getName() << ", Age: " << temp->doc->getAge() << "\n";
    temp = temp->nextDoc;
  }
}