//@Author MAYANK YADAV
// BFS implementation.
#include<iostream>
#include<queue>
using namespace std;
int main(){
	cout<<"Enter number of Vertices: ";
	int vertices;
	cin>>vertices;
	int Status[vertices+1];
	for(int i=0; i<vertices; i++)
		Status[i+1] = 1;
	
	int Edge[vertices+1][vertices+1];
	cout<<"Enter number of Edges: ";
	int edges;cin>>edges;
	for(int i =0; i<edges; i++){
		int StartingOfEgde, EndingOfEdge;
		cout<<"Enter Starting vertex of edge\t"<<i+1<<"\t";
		cin>>StartingOfEgde;
		cout<<"Enter Ending vertex of edge\t"<<i+1<<"\t";
		cin>>EndingOfEdge;
		Edge[StartingOfEgde][EndingOfEdge] = 1;}
	cout<<"Enter Starting Vertex for Traversal: ";
	int StartVertex; cin>>StartVertex;
	queue<int> BFS;//.push(int), .front(), .pop()
	BFS.push(StartVertex);
	Status[StartVertex] = 2;
	while(!BFS.empty()){
		int temp = BFS.front();
		cout<<temp<<" ";
		BFS.pop();
		Status[temp] = 3;
		for(int i=1;i<=vertices; i++)
			if(Edge[temp][i]==1 and Status[i]==1){
				BFS.push(i);
				Status[i] = 2;}}
	cout<<endl;
	return 0;}
				
