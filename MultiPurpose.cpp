//@Author MAYANK YADAV
/***************************************
For
1. Factorial
2. B'day Probability
3. Pyhtagorean Triplet

Using Parametrised constructor.
****************************************/
#include<iostream>
#include<math.h>
using namespace std;
class Factorial{
	int n;
	public:
		Factorial(int Num){
			n = Num;
			int res = 1;
    	for (int i=2; i<=n; i++)
     	   res *= i;
		cout<<"Factorial of "<<n<<" is "<<res<<endl;}
	};
class Triplet{
	float side1sqr, side2sqr, side3sqr;
	public:
		Triplet(float one, float two, float three){
			side1sqr = one*one;
			side2sqr = two*two;
			side3sqr = three*three;
			if(side3sqr == side1sqr + side2sqr)
				cout<<"Given Set is a Pythagorean Triplet\n";
			else if(side1sqr == side2sqr + side3sqr)
				cout<<"Given Set is a Pythagorean Triplet\n";
			else if(side2sqr == side1sqr + side3sqr)
				cout<<"Given Set is a Pythagorean Triplet\n";
			else
				cout<<"The Given Set isn't a Pythagorean Triplet\n";
			}
		};
class BDayParadox{
	//What is the probability that m persons among n have same birthday?
	int n ; //Total people
	public:
		BDayParadox(int m){
			cout<<"Enter The number of people in the room \t: ";
			cin>>n;
			float p = 1- exp(-pow(n, 2)/(m*365));
			cout<<"\nThe probability that "<<m<<" persons among "<<n<<" have same birthday is "<<p<<endl;}
		};
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
	while(1){
	cout<<"\n\nEnter what do you want to check\n1. Find Factorial of a number\n2. Calculate Birthday probability\n3. Check if 3 given numbers are Pythagorean Triplet or Not?\n4. Exit\n";
	int option;
	cin>>option;
	
	switch(option){
		case 1:{
			int n;
			cout<<"Enter number whose factorial is needed\t: "; cin>>n;
			Factorial Num(n);}
		break;
		case 2:{
			int m;//no. of people having common b'day
			cout<<"Enter the number of People who's common b'day probability you want to calculate\t: ";
			cin>>m;
			BDayParadox Probability(m);}
		break;
		case 3:{
			int one, two, three;
			cout<<"Enter Number One\t: "; cin>>one;
			cout<<"Enter Number Two\t: "; cin>>two;
			cout<<"Enter Number Three\t: "; cin>>three;
			Triplet Set(one, two, three);}
		break;
		case 4:{
			cout<<endl;
			return 0;}
		}
		}
	}
