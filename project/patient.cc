#include "patient.h"

patient:: patient() : person(), disease(),m_mortality(0){}
patient:: patient(int id,int age,Gender gender,bool anaemia,bool hypertension,bool diabetes,bool smoking,bool mortality,int ef, double platelet):person(id,age,gender),
                                                                                                                                                disease(anaemia,hypertension,diabetes,smoking),
                                                                                                                                                report(ef,platelet),
                                                                                                                                                m_mortality(mortality){}



bool patient::getMortality()
{
    return m_mortality;
}
