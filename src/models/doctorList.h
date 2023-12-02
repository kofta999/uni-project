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
  int getListLength() const;
  void listDoctors() const;
  void insertDoctor(Doctor *newDoctor);
  void deleteDoctor(string doctorName);
  Doctor *searchDoctor(string doctorName) const;
};