#include<iostream>
using namespace std;

void myString(char *&AtoZ,int N){
	AtoZ = new char [N];     
	for(int i = 0; i < N;i++) AtoZ[i] = 'A'+i;
	//AtoZ = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
