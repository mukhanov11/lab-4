#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;

	if (x1+1==x2 || x1-1==x2) {
		cout<<"YES";
	} else
		if (y1+1==y2 || y1-1==y2) {
			cout<<"YES";
	} else
		if (x1+1==x2 && y1+1==y2) {
			cout<<"YES";
	} else
		if (x1-1==x2 && y1-1==y2) {
			cout<<"YES";
	} else
                if (x1-1==x2 && y1+1==y2) {
			cout<<"YES";
	} else
		if (x1+1==x2 && y1-1==y2) {
			cout<<"YES";
	} else {
		cout<<"NO";
	}

return 0;

}