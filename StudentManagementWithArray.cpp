//@Author MAYANK YADAV
//program for implementing array of objects for student data.
#include<iostream>
#include<string>
//#include<conio>
#define TotalFee 200000
using namespace std;
class StudentInfo{
	string Name, RollNo, Branch, Batch, waste;
	int FeePaid;
	public:
		void getInfo(int);
		void showInfo(int);
	};
/////////////////////////////////////////////////////////////		
int main(){
	cout<<"Enter the number of students for which entry is to be made\t:";
	int n;
	cin>>n;
	StudentInfo Student[n];
	for(int i=0; i<n; i++){
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"Enter information for student No. "<<i+1;
		Student[i].getInfo(i);}
//	clrscr();
	cout<<"The following information have been entered\t:\n";
	for(int i=0; i<n; i++)
		Student[i].showInfo(i);
	return 0;
	}
///////////////////////////////////////////////////////////////	
void StudentInfo::getInfo(int i){
	i+=1;
	getline(cin, waste);
	cout<<"\nEnter the Name of Student "<<i<<"\t:"<<flush;
	getline (cin, Name);
	cout<<"\nEnter the Roll Number of Student "<<i<<"\t:";
	getline (cin, RollNo);
	cout<<"\nEnter the Branch of Student "<<i<<"\t:";
	getline (cin, Branch);
	cout<<"\nEnter the Batch of Student "<<i<<"\t:";
	getline (cin, Batch);
	cout<<"\nEnter the Fee Paid by the Student "<<i<<"\t:";
	cin>>FeePaid;}
////////////////////////////////////////////////////////////////
void StudentInfo::showInfo(int i){
	i+=1;
	int UnpaidFee = (TotalFee - FeePaid);
	cout<<"\nStudent "<<i<<" :\n";
	cout<<"		Name          : "<<Name<<endl;
	cout<<"		Roll Number   : "<<RollNo<<endl;
	cout<<"		Branch	      : "<<Branch<<endl;
	cout<<"		Batch         : "<<Batch<<endl;
	cout<<"		Paid Fee      : "<<FeePaid<<endl;
	cout<<"		Remaining Fee : "<<UnpaidFee<<endl;}
