#include "patient.h"

class PatientNode
{
public:
  Patient *patient;
  PatientNode *nextpatient;
  PatientNode *prevpatient;
  PatientNode();
};