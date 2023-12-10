#include "patientNode.h"

PatientNode::PatientNode()
{
  patient = new Patient();
  nextpatient = nullptr;
  prevpatient = nullptr;
}