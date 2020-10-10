#include "HeartFailure.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


void HeartFailure:: add_patient(int id, int age, Gender gen, bool anaemia, bool bp, bool diabetes, bool smoking,bool mortality, int ejec_frac, double platelet)
{
    patients.push_back( patient(id,age,gen,anaemia,bp,diabetes,smoking,mortality,ejec_frac,platelet) );
}

void HeartFailure:: remove_patient(int id)
{
     std::list<patient> :: iterator iter;
     for(iter=patients.begin(); iter!=patients.end();++iter)
     {
         if(iter->getId() == id)
         {
             patients.erase(iter);
             break;
         }

     }
}

int HeartFailure:: count_died_with_alldiseases()
{
    std::list<patient> :: iterator iter;
    int count=0;

    for(iter=patients.begin(); iter!=patients.end();++iter)
    {
        if(iter->getAnaemia() && iter-> getHypertension() && iter->getDiabetes() && iter->getSmokinghabit())
        {
            if(!(iter->getMortality()))// 1 means alive
              count++;
        }

    }

    return count;
}

std::list<int> HeartFailure:: ids_of_all_patients_alive_with_alldiseases()
{
    std::list<int> ids;
     std::list<patient> :: iterator iter;

    for(iter=patients.begin(); iter!=patients.end();++iter)
    {
        if(iter->getAnaemia() && iter-> getHypertension() && iter->getDiabetes() && iter->getSmokinghabit())
            if(iter->getMortality())
              ids.push_back(iter->getId());

    }

    return ids;
}

int HeartFailure:: patients_with_smokinghabit()
{
      std::list<patient> :: iterator iter;
      int count=0;
    for(iter=patients.begin(); iter!=patients.end();++iter)
    {
        if(iter->getSmokinghabit())
            count++;
    }
    return count;
}

int HeartFailure:: max_ejection_fraction()
{
    std::list<patient> :: iterator iter = patients.begin();
    int maxi = iter-> getEjecFraction();
    iter++;

    for(; iter!=patients.end();++iter)
     {
        if(maxi < iter->getEjecFraction())
        {
            maxi = iter->getEjecFraction();
        }
     }

     return maxi;
}

double HeartFailure:: min_platelet_count()
{
    std::list<patient> :: iterator iter = patients.begin();

    double mini = iter-> getPlatelets();
    iter++;

    for(;iter!=patients.end();++iter)
     {
        if(mini > iter-> getPlatelets())
        {
            mini = iter-> getPlatelets();
        }
     }

     return mini;
}

int HeartFailure:: patients_died_ageRange(int x,int y)
{
    std::list<patient> :: iterator iter;
    int count = 0;
     for(iter=patients.begin(); iter!=patients.end();++iter)
     {
         if(x < iter->getAge() && y > iter->getAge())
            if(!(iter->getMortality()))
               count++;
     }
    return count;
}

int HeartFailure:: patients_have_alldiseases_below_age(int age)
{
    std::list<patient> :: iterator iter;
    int count = 0;
     for(iter=patients.begin(); iter!=patients.end();++iter)
     {
         if( age >= iter->getAge())
            if(iter->getAnaemia() && iter-> getHypertension() && iter->getDiabetes() && iter->getSmokinghabit())
               count++;
     }
    return count;
}

void HeartFailure:: display()
{
      std::list<patient> :: iterator iter;
    for(iter=patients.begin(); iter!=patients.end();++iter)
    {
        std::cout << iter->getId() << "," << iter->getAge() << "," << iter->getGen() << iter->getPlatelets() <<std::endl;
    }

}

int HeartFailure::Number_of_patients()
{
   std::list<patient> :: iterator iter;
   int count =0;
    for(iter=patients.begin(); iter!=patients.end();++iter)
    {
        count++;
    }

   return count;
}
