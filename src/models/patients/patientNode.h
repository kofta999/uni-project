#include "patient.h"

class PatientNode
{
public:
  Patient *patient;
  PatientNode *nextPatient;
  PatientNode *prevPatient;
  PatientNode();
};