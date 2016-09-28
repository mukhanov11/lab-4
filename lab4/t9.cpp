#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;

	if (c==0 && d==0) {
			cout<<"INF";
	} else 
		if (b%a==0) {
			cout<<b/a*(-1);
	} else
		if (d%c==0) {
			cout<<d/c*(-1);
	} else 
		if (b%a!=0) {
			cout<<"NO";
	}

return 0;

}