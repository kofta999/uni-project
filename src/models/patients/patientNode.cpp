#include "patientNode.h"

PatientNode::PatientNode()
{
  patient = new Patient();
  nextPatient = nullptr;
  prevPatient = nullptr;
}