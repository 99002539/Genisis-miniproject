#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED

#include "person.h"
#include "disease.h"
#include "report.h"

class patient : public person, public disease, public report
{
   bool m_mortality;

public:

    patient();
    patient(int,int,Gender,bool,bool,bool,bool,bool,int,double);

    bool getMortality();

};
#endif // PATIENT_H_INCLUDED
