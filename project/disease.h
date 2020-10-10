#ifndef DISEASE_H_INCLUDED
#define DISEASE_H_INCLUDED

#include <iostream>

class disease
{
    bool m_anaemia;
    bool m_hypertension;
    bool m_diabetes;
    bool m_smokinghabit;

public:

    disease();
    disease(bool,bool,bool,bool);

    //getters

    bool getAnaemia();
    bool getHypertension();
    bool getDiabetes();
    bool getSmokinghabit();

};
#endif // DISEASE_H_INCLUDED
