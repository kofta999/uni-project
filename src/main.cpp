#include "./models/doctors/doctorList.h"
#include <iostream>

using namespace std;

int main()
{
  DoctorList list1;
  Doctor *doc1 = new Doctor("doc1", 23);
  Doctor *doc2 = new Doctor("doc2", 32);
  Doctor *doc3 = new Doctor("doc3", 52);
  list1.insertDoctor(doc1);
  list1.insertDoctor(doc2);
  list1.insertDoctor(doc3);
  cout << list1.getListLength() << "\n";
  list1.listDoctors();
  list1.deleteDoctor("doc2");
  list1.listDoctors();
  Doctor *foundDoc = list1.searchDoctor("doc1");
  cout << foundDoc->getName();
}