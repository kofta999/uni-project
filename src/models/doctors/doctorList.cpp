#include "doctorList.h"
#include <iostream>

DoctorList::DoctorList()
{
  first = nullptr;
  last = nullptr;
  count = 0;
}

DoctorList::~DoctorList()
{
  DoctorNode *temp = first;
  while (first != nullptr)
  {
    first = first->nextDoc;
    delete temp;
    temp = first;
  }
  last = nullptr;
  count = 0;
}

int DoctorList::getListLength() const
{
  cout << "List count is " << count << "\n";
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
  cout << "Added Doctor with"
       << ":\n    Name: " << newDoc->doc->getName() << ", Age: " << newDoc->doc->getAge() << "\n";
}

void DoctorList::listDoctors() const
{
  DoctorNode *temp = first;
  int counter = 0;
  cout << "Listing all Doctors in the list:\n";
  while (temp != nullptr)
  {
    counter++;
    cout << "    Doctor #" << counter << ":\n\tName: " << temp->doc->getName() << ", Age: " << temp->doc->getAge() << "\n";
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

  cout << "Doctor " << doctorName << " has been removed\n";
  delete temp;
}

Doctor *DoctorList::searchDoctor(string doctorName) const
{
  DoctorNode *temp = first;

  while (temp != nullptr)
  {
    if (temp->doc->getName() == doctorName)
    {
      cout << "Found Doctor with Name: " << doctorName << "\n";
      return temp->doc;
    }

    temp = temp->nextDoc;
  }

  cout << "Couldn't find Doctor with Name: " << doctorName << "\n";
  return nullptr;
}