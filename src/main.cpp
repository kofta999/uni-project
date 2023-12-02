#include "./models/doctorList.h"
#include <iostream>

using namespace std;

int main()
{
  DoctorList list1;
  Doctor *doc1 = new Doctor("doc1", 23);
  Doctor *doc2 = new Doctor("doc2", 32);
  list1.insertDoctor(doc2);
  list1.insertDoctor(doc1);
  cout << list1.getListLength() << "\n";
  list1.listDoctors();
}