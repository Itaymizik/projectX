/* Assignment: 3
Author: Itay Mizikov, ID: 315541615
Author: Liel Sinn, ID: 209195155
 */

#ifndef UNTITLED_TEACHER_H
#define UNTITLED_TEACHER_H

#include <string.h>
#include <vector>
#include <cstring>
#include "Worker.h"
#include "Person.h"
#include <iostream>


class Worker;
class Person;
class Class;

class Teacher : public virtual Worker {

protected:
    vector<string> study_sbj;      // subjects the teacher is teaching
    int num_subj;

public:
    Teacher(const Teacher& other);
    Teacher(std::string frt_name, std::string lst_name, vector<string> study_sbj, int num_subj, double tch_exp_time);
    double Get_Sallary();
    bool Top_Person();
    void Print_Subjects();
    void Print_Details();
    virtual ~Teacher();
    virtual Class* Get_Class();
    vector<string> Get_sturdy_sbj(); //is a virutal method
};
#endif
