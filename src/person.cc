
#include "person.h"

person::person(): m_id(0),m_age(0),m_gen(M){}
person::person(int id,int age,Gender gen): m_id(id),m_age(age),m_gen(gen){}

int person::getAge()
{
    return m_age;
}
int person::getId()
{
    return m_id;
}
Gender person::getGen()
{
    return m_gen;
}
