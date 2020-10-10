#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>

enum Gender
{
    M = 1,
    F = 0
};

class person
{
    int m_id;
    int m_age;
    Gender m_gen;

public:

    person();
    person(int,int,Gender);

    // getters

    int getAge();
    int getId();
    Gender getGen();
};
#endif // PERSON_H_INCLUDED
