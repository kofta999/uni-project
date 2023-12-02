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
  newDoc->prevDoc = last;

  if (first == nullptr)
  {
    first = newDoc;
  }
  else
  {
    last->nextDoc = newDoc;
  }

  last = newDoc;
  count++;
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

void DoctorList::deleteDoctor(string doctorName)
{
  if (count == 0)
  {
    return;
  }

  DoctorNode *temp = first;
  while (temp != nullptr && temp->doc->getName() != doctorName)
  {
    temp = temp->nextDoc;
  }

  if (temp == nullptr)
  {
    return;
  }

  if (temp->prevDoc != nullptr)
  {
    temp->prevDoc->nextDoc = temp->nextDoc;
  }
  else
  {
    first = temp->nextDoc;
  }

  if (temp->nextDoc != nullptr)
  {
    temp->nextDoc->prevDoc = temp->prevDoc;
  }

  delete temp;
}

Doctor *DoctorList::searchDoctor(string doctorName) const
{
  DoctorNode *temp = first;

  while (temp != nullptr)
  {
    if (temp->doc->getName() == doctorName)
    {
      return temp->doc;
    }

    temp = temp->nextDoc;
  }

  return nullptr;
}