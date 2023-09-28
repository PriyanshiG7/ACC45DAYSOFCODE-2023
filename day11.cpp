#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,d;
	    cin>>n>>m;
	    d=36*m;
	    if(n<=d){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
 