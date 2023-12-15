#include "./models/doctors/doctorList.h"
#include "./models/patients/patientQueue.h"
#include <iostream>

using namespace std;

void newLine()
{
  cout << "\n";
}

int main()
{
  // Creates doctors list
  DoctorList doctorsList;

  // Creates doctors to use in list
  Doctor *doctor1 = new Doctor("Doctor 1", 32);
  Doctor *doctor2 = new Doctor("Doctor 2", 53);
  Doctor *doctor3 = new Doctor("Doctor 3", 41);

  // Inserts doctors in list
  doctorsList.insertDoctor(doctor1);
  doctorsList.insertDoctor(doctor2);
  doctorsList.insertDoctor(doctor3);

  newLine();

  // Checks doctors list length
  doctorsList.getListLength();

  newLine();

  // Lists all doctors
  doctorsList.listDoctors();

  newLine();

  // Searches for a doctor in the list
  doctorsList.searchDoctor("Doctor 1");

  // Searches for a doctor not in the list
  doctorsList.searchDoctor("Doctor 5");

  newLine();

  // Deletes a doctor in the list
  doctorsList.deleteDoctor("Doctor 1");

  // Deletes a doctor not in the list
  doctorsList.deleteDoctor("Doctor 5");

  newLine();
  newLine();
  newLine();
  newLine();

  // Creates patients list
  PatientQueue patientsQueue;

  // Creates patients to use in queue
  Patient *patient1 = new Patient("Patient 1", 32);
  Patient *patient2 = new Patient("Patient 2", 53);
  Patient *patient3 = new Patient("Patient 3", 41);

  // Inserts patients in queue
  patientsQueue.addPatient(patient1);
  patientsQueue.addPatient(patient2);
  patientsQueue.addPatient(patient3);

  newLine();

  // Checks patients queue length
  patientsQueue.getQueueLength();

  // Gets the front and back of the queue
  cout << patientsQueue.getFront()->getName() << " is in the front of the queue\n";
  cout << patientsQueue.getBack()->getName() << " is in the back of the queue\n";

  newLine();

  // Lists all patients
  patientsQueue.listPatients();

  newLine();

  // Searches for a patient in the queue
  patientsQueue.searchPatient("Patient 1");

  // Searches for a patient not in the queue
  patientsQueue.searchPatient("Patient 5");

  newLine();

  // Deletes the patient in the front of the queue
  patientsQueue.deletePatient();

  newLine();

  // Checks if the queue is empty or not
  patientsQueue.isQueueEmpty();

  newLine();

  // Removes every item in the queue
  patientsQueue.destroyQueue();
  cout << "Queue is destroyed\n";
  patientsQueue.isQueueEmpty();
}