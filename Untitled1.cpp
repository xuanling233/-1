#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 4e6+1e2;
char s[maxn];
int main()
{
	int n,m,n1,l,n2,i,j;
	cin>>n;	
	string a;
	cin>>s;
	n1=strlen(s);
	for(i=0;i<n;i++)
	{
		n2=0;
		cin>>a;
		l=a.length();
		for(i=0;i<n1-l+1;i++)
		{
		string b;
		b.clear();
		for (j=i-1;j<i+l-1;j++) b+=s[j];
		if (a==b) ++n2;
		}
		cout<<n2;
		if(i!=n) cout<<endl;
	}
	return 0;
}
