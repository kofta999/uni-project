#include "patientQueue.h"
#include <iostream>

using namespace std;

class PatientQueue
{
private:
  PatientNode *front;
  PatientNode *back;
  int count;

public:
  PatientQueue(); 
  ~PatientQueue(); 

  Patient *searchPatient(string patientName) const;
  Patient *getFront() const;
  Patient *getBack() const;
  int getListLength() const;
  void listPatients() const;
  void addPatient(Patient *newPatient);
  void deletePatient(string patientName);
  void destroyQueue();
  bool isQueueEmpty();
};


PatientQueue::PatientQueue() : front(nullptr), back(nullptr), count(0) {}


PatientQueue::~PatientQueue()
{
  destroyQueue();
}


Patient *PatientQueue::searchPatient(string patientName) const
{

}

Patient *PatientQueue::getFront() const
{
  return front ? front->getPatient() : nullptr;
}

Patient *PatientQueue::getBack() const
{
  return back ? back->getPatient() : nullptr;
}


int PatientQueue::getListLength() const
{
  return count;
}


void PatientQueue::listPatients() const
{
  PatientNode *current = front;
  while (current)
  {
    cout << "Patient: " << current->getPatient()->getName() << endl;
    current = current->getNext();
  }
}

void PatientQueue::addPatient(Patient *newPatient)
{
  PatientNode *newNode = new PatientNode(newPatient);
  if (isQueueEmpty())
  {
    front = newNode;
    back = newNode;
  }
  else
  {
    back->setNext(newNode);
    back = newNode;
  }
  count++;
}


void PatientQueue::deletePatient(string patientName)
{

}


void PatientQueue::destroyQueue()
{
  PatientNode *current = front;
  PatientNode *next;

  while (current)
  {
    next = current->getNext();
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


