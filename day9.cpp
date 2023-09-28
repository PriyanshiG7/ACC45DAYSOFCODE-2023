// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x, z,y;
// 	    cin>>x>>z>>y;
// 	    if (x*z<y){
// 	        std::cout << z << std::endl;
// 	    }
// 	}
// 	return 0;
// }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,d;
	    cin>>x>>y;
	    d=y/x;
	    if(d*x<y)
	    {
	        cout<<d<<endl;
	    }
	    else
	    cout<<d-1<<endl;
	}
	return 0;
}






