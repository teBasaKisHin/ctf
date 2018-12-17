#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k;

	for(i=3;i<=100000000;i+=2)
	{
		k=0;
		for(j=3;j<=sqrt(i);j+=2)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}

		if(k==0) printf("%d ",i);
	}

	printf("\n");

	return 0;
}