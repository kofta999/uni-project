#include "doctorNode.h"
#include <string>

using namespace std;

class DoctorList
{
public:
  DoctorNode *first;
  DoctorNode *last;
  int count;

  DoctorList();
  // At first
  void listDoctors();
  void insertDoctor(Doctor newDoctor);
  void deleteDoctor(string doctor);
  void searchDoctor(string doctorName);
};