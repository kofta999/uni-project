#include "doctor.h"

class DoctorNode
{
public:
  Doctor doc;
  DoctorNode *nextDoc;
  DoctorNode *prevDoc;
};