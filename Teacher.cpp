/* Assignment: 3
Author: Itay Mizikov, ID: 315541615
Author: Liel Sinn, ID: 209195155
 */


#include "Teacher.h"
#include "Worker.h"
#include "Class.h"

Teacher::Teacher(const Teacher& other) :
	Worker(other.first_name, other.last_name, other.tch_exp_time, 0) {
	this->num_subj = other.num_subj;
	this->study_sbj = other.study_sbj;

}
Teacher::Teacher(std::string frt_name, std::string lst_name, vector<string> study_sbj, int num_subj,
	double tch_exp_time) : Worker(frt_name, lst_name, tch_exp_time, 0)
{

	this->num_subj = num_subj;
	this->study_sbj = study_sbj;

}

double Teacher::Get_Sallary() {      // return the monthly sallary of the teacher 

	double sallary, exp_time;
	exp_time = this->Get_TchExp_Time();
	sallary = (this->basis) * (1 + ((this->num_subj) / 10)) + 300 * (exp_time);     // the formula is : basis*(1+x/10)+300y ;(when x=num of subj, y=exp time)
	return sallary;
}

bool Teacher::Top_Person() {

	if (this->num_subj >= 5) {
		std::cout << "This is a top teacher !! " << endl;
		Set_Top_Person();//this->top_person = true; 
		return true;
	}
	else {
		return false;
	}
}


void Teacher::Print_Subjects() {
	std::cout << "The subjects that the teacher teaches: " << endl;
	for (int i = 0; i < this->study_sbj.size(); i++) {
		cout << this->study_sbj[i];
		cout << ", ";
	}
	cout << endl;
	return;
}

void Teacher::Print_Details() {

	std::cout << "Teacher's full name: " << this->getPerson_FirstName() << " " << this->getPerson_LastName() << endl;
	this->Print_Subjects();
	std::cout << "Teacher's sallary: " << this->Get_Sallary() << endl;
	std::cout << "Teacher's expreince: " << this->Get_TchExp_Time() << endl;
	std::cout << "Top teacher: ";
	if (this->top_person == true) {
		std::cout << "Yes !! " << endl;
	}
	else {
		std::cout << " No " << endl;
	}
}
Teacher::~Teacher() {
	cout << "deleting Teacher" << endl;
}

vector<string> Teacher::Get_sturdy_sbj() {
	return this->study_sbj;
}

Class* Teacher::Get_Class() {
	return NULL;
}









