#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "HeartFailure.h"


namespace

{

class HeartFailureTest : public ::testing::Test {

protected:
  void SetUp()
  {

std::fstream fin;
fin.open("sample.csv");
std::vector<std::string> row;

std::string line, word;

 while(!fin.eof())
{
    row.clear();
    getline(fin,line);

    std::stringstream s(line);

    while(getline(s,word,','))
    {
        row.push_back(word);
    }

    int id, age, ejec_frac;
    Gender gen;
    bool anaemia, bp, diabetes, smoking, mortality;
    double platelet;
 //   std::string arr[10] = {row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7],row[8],row[9]};

   std::vector< int> num;

   for(int i=0; i<10 ;i++)
   {
       int n = atoi(row[i].c_str());
       num.push_back(n);

   }
    id = num[0];
    age = num[1];
    gen = Gender(num[2]);
    anaemia = num[3];
    bp = num[4];
    diabetes = num[5];
    smoking = num[6];
    mortality = num[7];
    ejec_frac =num[8];
    platelet = num[9];

    dummy.add_patient(id,age,gen,anaemia,bp,diabetes,smoking,mortality,ejec_frac,platelet);


}

  }
  void TearDown() {}

  HeartFailure dummy;

};


TEST_F(HeartFailureTest,Addpatient)
{
      // dummy.remove_patient(1);
    EXPECT_EQ(101,dummy.Number_of_patients());
}



TEST_F(HeartFailureTest,removpatient)
{
    dummy.remove_patient(2);
    EXPECT_EQ(100,dummy.Number_of_patients());
}

TEST_F(HeartFailureTest,diedwithalldiseases)
{
    EXPECT_EQ(1,dummy.count_died_with_alldiseases());

}


TEST_F(HeartFailureTest,smokinghabit)
{
    EXPECT_EQ(33,dummy.patients_with_smokinghabit());

}

TEST_F(HeartFailureTest,MaxEjecFrac)
{
 EXPECT_EQ(80,dummy.max_ejection_fraction());

}

TEST_F(HeartFailureTest,Minplatelets)
{
 EXPECT_EQ(47000,dummy.min_platelet_count());

}

TEST_F(HeartFailureTest,Agerange)
{
 EXPECT_EQ(6,dummy.patients_died_ageRange(30,50));

}


TEST_F(HeartFailureTest,AlldiseasesbelowAge)
{
 EXPECT_EQ(0,dummy.patients_have_alldiseases_below_age(50));

}

}
