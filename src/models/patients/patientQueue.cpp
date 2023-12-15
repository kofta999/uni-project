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
  PatientNode *temp = back;

  while (temp != nullptr)
  {
    if (temp->patient->getName() == patientName)
    {
      cout << "Found Patient " << patientName << "\n";
      return temp->patient;
    }

    temp = temp->nextPatient;
  }

  cout << "Couldn't find Patient" << patientName << "\n";
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
  cout << "Queue length is " << count << "\n";
  return count;
}

void PatientQueue::listPatients() const
{
  if (count == 0 && front == back && front == nullptr)
  {
    cout << "Queue is Empty\n";
    return;
  }
  PatientNode *current = front;
  int counter = 0;
  cout << "Listing patients from the front to the back of the queue\n";
  while (current != nullptr)
  {
    counter++;
    cout << "    Patient #" << counter << ":\n\tName: " << current->patient->getName() << ", Age: " << current->patient->getAge() << "\n";
    current = current->prevPatient;
  }
}

void PatientQueue::addPatient(Patient *newPatient)
{
  PatientNode *newNode = new PatientNode();
  newNode->patient = newPatient;

  if (front == nullptr && back == nullptr)
  {
    front = newNode;
    back = newNode;
  }
  else
  {
    back->prevPatient = newNode;
    newNode->nextPatient = back;
    back = newNode;
  }
  cout << "Added Patient with"
       << ":\n    Name: " << newNode->patient->getName() << ", Age: " << newNode->patient->getAge() << "\n";
  count++;
}

void PatientQueue::deletePatient()
{
  if (count == 0)
  {
    return;
  }

  PatientNode *temp = front;

  if (count == 1 && front == back)
  {
    front = nullptr;
    back = nullptr;
  }
  else
  {
    front = temp->prevPatient;
    if (front != nullptr)
    {
      front->nextPatient = nullptr;
    }
  }

  cout << "Patient " << temp->patient->getName() << " on the front of the queue has been removed\n";
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
  if (front == nullptr && back == nullptr)
  {
    cout << "Queue is empty\n";
    return true;
  }
  else
  {
    cout << "Queue is not empty\n";
    return false;
  };
}
