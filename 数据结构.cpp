#include<stdio.h>

void Joesphus(int n,int k)
{
	int i,num,sum,r[100];
	for(i=0;i<n;i++)
	{
		r[i]=i;
	}
	r[0]=n;
	for(sum=num=i=0;sum<n;i=(i+1)%n)
	{
		if(r[i]!=-1)
		{
			num++;
			if(num%k==0)
			{
				printf("%d\t",r[i]);
				num=0;
				sum++;
				r[i]=-1;
			}
		}
	}
}
int main()
{
	int n1,k1;
	printf("n=?");
	scanf("%d",&n1);
	printf("k=?");
	scanf("%d",&k1);
	Joesphus(n1,k1);
	return 0;
}

