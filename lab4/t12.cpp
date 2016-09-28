#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, m, n;
	cin>>k>>m>>n;

	cout<<((n-(k%n+1))/k+1)*2*m;
	

return 0;

}