#include "patientQueue.h"
#include <iostream>

using namespace std;

PatientQueue::PatientQueue() : front(nullptr), back(nullptr), count(0) {}

PatientQueue::~PatientQueue()
{
  if (front != nullptr && back != nullptr)
  {
    destroyQueue();
  }
}

Patient *PatientQueue::searchPatient(string patientName) const
{
  PatientNode *temp = front;

  while (temp != nullptr)
  {
    if (temp->patient->getName() == patientName)
    {
      return temp->patient;
    }

    temp = temp->nextPatient;
  }

  return nullptr;
}

Patient *PatientQueue::getFront() const
{
  return front ? front->patient : nullptr;
}

Patient *PatientQueue::getBack() const
{
  return back ? back->patient : nullptr;
}

int PatientQueue::getQueueLength() const
{
  return count;
}

void PatientQueue::listPatients() const
{
  PatientNode *current = front;
  while (current)
  {
    cout << "Patient: " << current->patient->getName() << endl;
    current = current->nextPatient;
  }
}

void PatientQueue::addPatient(Patient *newPatient)
{
  PatientNode *newNode = new PatientNode();
  newNode->patient = newPatient;

  if (isQueueEmpty())
  {
    front = newNode;
    back = newNode;
  }
  else
  {
    back->nextPatient = newNode;
    back = newNode;
  }
  count++;
}

void PatientQueue::deletePatient(string patientName)
{
  if (count == 0)
  {
    return;
  }

  PatientNode *temp = front;

  while (temp != nullptr && temp->patient->getName() != patientName)
  {
    temp = temp->nextPatient;
  }

  if (temp == nullptr)
  {
    return;
  }

  if (temp->prevPatient != nullptr)
  {
    temp->prevPatient->nextPatient = temp->nextPatient;
  }
  else
  {
    front = temp->nextPatient;
  }

  if (temp->nextPatient != nullptr)
  {
    temp->nextPatient->prevPatient = temp->prevPatient;
  }

  delete temp;
  count--;
}

void PatientQueue::destroyQueue()
{
  PatientNode *current = front;
  PatientNode *next;

  while (current)
  {
    next = current->nextPatient;
    delete current;
    current = next;
  }

  front = back = nullptr;
  count = 0;
}

bool PatientQueue::isQueueEmpty()
{
  return front == nullptr;
}
