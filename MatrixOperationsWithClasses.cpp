//@Author MAYANK YADAV
//Matrix addition and multiplication.
#include<iostream>
using namespace std;
class Matrix{
	//public:
	static int Rows, Columns;
	int Mat[Rows][Columns];
	public:
		Matrix(int Rows, int Columns){
			this->Rows = Rows;
			this->Columns = Columns;
			cout<<"Enter the elemets at\t:\n";
			for(int i =0; i<Rows; i++)
				for(int j =0 ; j<Columns; j++){
					cout<<"["<<i+1<<", "<<j+1<<"]\t: "; 
					cin>>Mat[i][j];}
				}
		};
//////////////////////////////////////////////////////////
void MatSum(Matrix,int, int, Matrix, int, int);
void MatMult(Matrix, Matrix);
///////////////////////////////////////////////////////////
void MatSum(Matrix Mat1,int i1, int j1, Matrix Mat2, int i2, int j2 ){
	if(i1==i2 && j1==j2){
	int Mat[i1][j1];
		for(int i =0; i<i1; i++)
			for(int j=0; j<j1; j++)
				Mat[i][j] = Mat1[i][j] + Mat2[i][j];
	cout<<"Sum of Provided matrices is:\n";
	for(int i =0; i<i1; i++){
		cout<<endl;
		for(int j=0; j<j1; j++)
			cout<<Mat[i][j];}
			}
	else
		cout<<"\nMatrices not of Same Size, Can't add\n";
		}
////////////////////////////////////////////////////////////
void MatMult(Matrix Mat1,int i1, int j1, Matrix Mat2, int i2, int j2 ){
	if(j1 != i2)
		cout<<"The Matrices Can't be Multiplied beacuse of uncompatible dimensions\n";
	else{
		int Mat[i1][j2];
		for(int i=0; i<i1; i++)
			for(int j=0; j<j2; j++){
				Mat[i][j] = 0;
				for(int k=0; k<j1; k++)
					Mat[i][j] += Mat1[i][k]*Mat[k][j];
					}
		cout<<"The Product of the given matrice is:\n";
		for(int i =0; i<i1; i++){
		cout<<endl;
		for(int j=0; j<j1; j++)
			cout<<Mat[i][j];}
		}
	}
///////////////////////////////////////////////////////////
int main(){
	int i1, i2, j1, j2;
	cout<<"Enter Rows of Matrix 1\t: "; cin>>i1;
	cout<<"Enter Columns of Matrix 1\t: "; cin>>j1;	
	cout<<"Enter Rows of Matrix 2\t: "; cin>>i2;	
	cout<<"Enter Columns of Matrix 2\t: "; cin>>j2;	
	Matrix Mat1(i1, j2), Mat2(i2, j2);
	void MatSum(Mat1, i1, j1, Mat2, i2, j2);
	void MatMult(Mat1, i1, j1, Mat2, i2, j2);
	cout<<endl;
	return 0;}
