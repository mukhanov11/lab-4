#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;

	if (a==0) {
		cout<<"INF";
	} else {
		if (b%a==0) {
			cout<<b/a*(-1);
		} else {
			cout<<"NO";
		}
	}
	

return 0;

}