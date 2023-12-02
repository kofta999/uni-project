#include "doctorNode.h"

DoctorNode::DoctorNode()
{
  doc = new Doctor();
  nextDoc = nullptr;
  prevDoc = nullptr;
}