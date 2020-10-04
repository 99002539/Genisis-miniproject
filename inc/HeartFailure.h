#ifndef HEARTFAILURE_H_INCLUDED
#define HEARTFAILURE_H_INCLUDED

#include "patient.h"
#include <list>
#include <iterator>

class HeartFailure
{
    std::list <patient> patients;


public:

   // void setup();
    void add_patient(int id, int age, Gender gen, bool anaemia, bool bp, bool diabetes, bool smoking, bool mortality, int ejec_frac, double platelet);
    void remove_patient(int id);
    int count_died_with_alldiseases();
    std::list<int> ids_of_all_patients_alive_with_alldiseases();
    int patients_with_smokinghabit();
    int max_ejection_fraction();
    double min_platelet_count();
    int patients_died_ageRange(int x ,int y);
    int patients_have_alldiseases_below_age(int age);
    void display();
    int Number_of_patients();

};



#endif // HEARTFAILURE_H_INCLUDED
