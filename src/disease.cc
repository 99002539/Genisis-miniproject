#include "disease.h"

disease::disease(): m_anaemia(0),m_hypertension(0),m_diabetes(0),m_smokinghabit(0){}
disease::disease(bool anaemia,bool hypertension,bool diabetes,bool smoking) : m_anaemia(anaemia),
                                                                              m_hypertension(hypertension),
                                                                              m_diabetes(diabetes),
                                                                              m_smokinghabit(smoking){}

bool disease::getAnaemia()
{
    return m_anaemia;
}
bool disease::getHypertension()
{
    return m_hypertension;
}
bool disease::getDiabetes()
{
    return m_diabetes;
}
bool disease::getSmokinghabit()
{
    return m_smokinghabit;
}

