//@Author MAYANK YADAV 
//WAP to implement Friend class to Student information system
#include<iostream>
#include<string>
int RN = 1;
using namespace std;

class Information{
	char Name[20], Batch[10], waste[2];
	int AdmissionYear, FeePaid;
	friend class Management;
	public:
		void GetInfo();
		};
		
	void Information::GetInfo(){
			cout<<"\nEnter Name of Student\t: ";
			//getline (cin, Name);
			cin>>Name;
			cout<<"\nEnter BAtch of the Student(20__ - 20__)\t: ";
			//getline (cin, Batch);
			cin>>Batch;
			cout<<"\nEnter Admission Year of the student\t: ";
			cin>>AdmissionYear;
			cout<<"\nEnter paid fees by the student\t: ₹ ";
			cin>>FeePaid;
			}	
	
class Management{
	int TotalFee;
	public:
		void DisplayInfo(Information& X){
			cout<<"Name : "<< X.Name;
			int AdYr = (X.AdmissionYear % 100);
			cout<<"\nRoll Number : "<<AdYr<<"VF1M33"<<RN<<endl; RN++;
			if(AdYr == 15) TotalFee = 125000;
			if(AdYr == 16) TotalFee = 150000;
			if(AdYr == 17) TotalFee = 175000;
			if(AdYr == 18) TotalFee = 200000;
			int RemainingFee = TotalFee - X.FeePaid ;
			cout<<"\nRemaining Fee\t: ₹ "<<RemainingFee<<endl;
			}
		};
/////////////////////////////////////////////////////////////////////////////		
int main(){
	cout<<"Enter the number of students whose information is to be managed\t: "; int n; cin>>n;
	Information Student[n];
	cout<<"Give required Informations:\n";
	for(int i =0; i<n;i++){
		cout<<endl;
		Student[i].GetInfo();}
	cout<<"\n\nThe Summrised information is as follows:\n\n";
	for(int i =0; i<n;i++){
		Management B;
		B.DisplayInfo(Student[i]);
		cout<<endl;}
	cout<<endl;
	return 0;
	}
