#include <iostream>
using namespace std;
 
void print(int s int n) {
	if(n==s){
		cout<<s;
	}
	else{
		cout<<s<<endl;
		print(s+2,n);
	}
 
}
int main() {
	int s,n;
	cout<<"Enter the starting number"<<endl;
	cin>>s;
	cout<<"Enter the ending number"<<endl;
	cin>>n;
	print(s,n);
 
 
	return 0;
}

