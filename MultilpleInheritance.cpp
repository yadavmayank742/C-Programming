//@Author MAYANK YADAV
//Real world Multipe inheritance
#include<iostream>
#include<string>
using namespace std;
class PersonalInfo{
	string Name, FatherName, MotherName, BirthPlace, waste;
	int DOB, MOB, YOB;
	public:
		void getPersonalInfo(){
			getline(cin, waste);
			cout<<"\n Please Enter Your Personal Informations\t:\n";
			cout<<"\tEnter Your Name         \t: ";
			getline(cin, Name);
			cout<<"\tEnter Your Father's Name\t: ";
			getline(cin, FatherName);
			cout<<"\tEnter Your Mother's Name\t: ";
			getline(cin, MotherName);
			cout<<"Enter Your Birth Place\t: ";
			getline(cin, BirthPlace);
			cout<<"\tEnter your Date Of Birth (DD/MM/YYYY, SEPARATED BY SPACE)\t: ";
			cin>>DOB;cin>>MOB;cin>>YOB;
			cout<<endl;
			}
		
		void displayPersonalInfo(){
			cout<<"\nPersonal Details are as follows\t:\n";
			cout<<"\n\tName         \t: "<<Name;
			cout<<"\n\tFather's Name\t: "<<FatherName;
			cout<<"\n\tMother's Name\t: "<<MotherName;
			cout<<"\n\tBirth Place  \t: "<<BirthPlace;
			cout<<"\n\tDOB          \t: "<<DOB<<"/"<<MOB<<"/"<<YOB;
			cout<<endl;}
		};
class WorkInfo{
	string CompanyName, Designation, ReasonToLeave, waste;
	int JoinYear, LeaveYear;
	int Package;
	public:
		void getWorkInfo(int CompanyNumber){
			getline(cin, waste);
			cout<<"\nPlease Enter your Work Information in Company Number "<<CompanyNumber<<"\t:\n";
			cout<<"\tEnter Company Name\t: ";
			getline(cin, CompanyName);
			cout<<"\tEnter Your Designation in The Comapny\t: ";
			getline(cin, Designation);
			cout<<"\tEnter Joining Year\t: ";
			cin>>JoinYear;
			cout<<"\tEnter Leaving Year\t: " ;
			cin>>LeaveYear;
			cout<<"\tEnter Package Withdwn\t:  ₹";
			cin>>Package;
			cout<<"\tPlease Specify the reason to resign from "<<CompanyName<<"\t:\n";
			getline(cin, ReasonToLeave);}
			
		void displayWorkInfo(int CompanyNumber){
			cout<<"\nPrevious Working Details are as follow\t:\n";
			cout<<"\tCompany "<<CompanyNumber<<". "<<CompanyName<<endl;
			cout<<"\n\t\tWorked As\t: "<<Designation;
			cout<<"\n\t\tWorked From "<<JoinYear<<" to "<<LeaveYear<<"( Work Experience of "<<LeaveYear-JoinYear<<" Years)\n";
			cout<<"\n\t\tPackage Withdrawn: ₹"<<Package;
			cout<<"\n\t\tReason to Quit the Job\t: "<<ReasonToLeave;
			cout<<endl;}			
		};

class CandidateInfo: public WorkInfo, public PersonalInfo {
	string ReasonToJoin, SOP, ExpectedSalary, waste;
	public:
		void Questtionare(){
			getline(cin, waste);
			cout<<"Why do you think you are eligible for this job?\n";
			getline(cin, SOP);
			cout<<"Please Explain Why do you think yourself as an appropriate candidate for this job?\n";
			getline(cin, ReasonToJoin);
			cout<<"Enter Expected salary\t: ";
			getline(cin, ExpectedSalary);
			cout<<endl;}
		};
		
int main(){
	cout<<"###################  HELLO DEAR APPLICANT ###################\n";
	CandidateInfo Candidate; int NumberOfCompanies;
	cout<<"How many firms have you worked with ?\t: "; cin>>NumberOfCompanies;
	step1 : 
	Candidate.getPersonalInfo();
	step2 : 
	if(NumberOfCompanies != 0)
		for(int i = 0; i<NumberOfCompanies; i++)
			Candidate.getWorkInfo(i+1);
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\nPlease Review Your Entered information before submission\t:\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	Candidate.displayPersonalInfo();
	if(NumberOfCompanies != 0){
		for(int i = 0; i<NumberOfCompanies; i++)
			Candidate.displayWorkInfo(i+1);}
	else
		cout<<"You have specified yourself as Fresher\n";
	cout<<"\n\nSUBMIT(y/n)\t: "; char option; cin>>option;
	if(option == 'y' || option == 'Y'){
		cout<<"Above Displayed Information Submittted Successfully\n";
		return 0;}
	if(option == 'n' || option == 'N'){
		cout<<"Do you have correction in Personal Info?\t: ";
		cin>>option;
		if(option == 'y' || option == 'Y')
			goto step1;
		cout<<"Do you have correction in Work Info?\t: ";
		cin>>option;
		if(option == 'y' || option == 'Y')
			goto step2;
		}
	cout<<endl;}
		
		
