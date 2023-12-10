#include "./models/doctors/doctorList.h"
#include "./models/patients/patientQueue.h"
#include <iostream>

using namespace std;

int main()
{
  // DoctorList list1;
  // Doctor *doc1 = new Doctor("doc1", 23);
  // Doctor *doc2 = new Doctor("doc2", 32);
  // Doctor *doc3 = new Doctor("doc3", 52);
  // list1.insertDoctor(doc1);
  // list1.insertDoctor(doc2);
  // list1.insertDoctor(doc3);
  // cout << list1.getListLength() << "\n";
  // list1.listDoctors();
  // list1.deleteDoctor("doc2");
  // list1.listDoctors();
  // Doctor *foundDoc = list1.searchDoctor("doc1");
  // cout << foundDoc->getName();

  PatientQueue list2;
  Patient *pat1 = new Patient("pat1", 34);
  Patient *pat2 = new Patient("pat2", 44);
  Patient *pat3 = new Patient("pat3", 42);
  list2.addPatient(pat1);
  list2.addPatient(pat2);
  list2.addPatient(pat3);
  cout << list2.getQueueLength() << "\n";
  list2.listPatients();

  cout << list2.searchPatient("pat3")->getName() << "\n";
  // cout << list2.isQueueEmpty() << "\n";
  list2.destroyQueue();
  cout << list2.getQueueLength() << "\n";
}