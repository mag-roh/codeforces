#include<stdio.h>
int i,n,x,C[101];
int main()
{
	for(scanf("%d",&n);i<n;i++)
	{
		scanf("%d",&x),C[x]++;
	}
	for(i=0;i<101;i++)
		while(C[i]--)
		printf("%d ",i);
return 0;
}


