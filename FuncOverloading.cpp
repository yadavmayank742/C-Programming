//@Author MAYANK YADAV
//Program to implement Function oveloading:
#include<iostream>
using namespace std;
int Average(int, int);
float Average(float, float);
bool Average();
int main(){
	cout<<"\nEnter 2 INTEGERS for Their Average :\n";
	int i1, i2, intAvg;
	cin>>i1>>i2;
	intAvg = Average(i1, i2);
	cout<<"\nAverage("<<i1<<", "<<i2<<") = "<<intAvg;
	cout<<"\nEnter 2 FLOAT for Their Average :\n";
	float f1, f2, floatAvg;
	cin>>f1>>f2;
	floatAvg = Average(f1, f2);
	cout<<"\nAverage("<<f1<<", "<<f2<<") = "<<floatAvg;
	cout<<"\nEnter 2 NUMBERS for Their Average :\n";
	int n1, n2, numAvg;
	cin>>n1>>n2;
	numAvg = Average();
	cout<<"\nAverage exixts : "<<numAvg;
	cout<<endl;
	return 0;}

int Average(int a, int b){
	return((a+b)*0.5);}

float Average(float a, float b){
	return((a+b)*0.5);
	}

bool Average(){
	return true;}
	
