#include "patientNode.h"

PatientNode::PatientNode()
{
  doc = new Patient();
  nextDoc = nullptr;
  prevDoc = nullptr;
}