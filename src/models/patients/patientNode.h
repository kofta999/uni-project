#include "patient.h"

class PatientNode
{
public:
  Patient *doc;
  PatientNode *nextDoc;
  PatientNode *prevDoc;
  PatientNode();
};