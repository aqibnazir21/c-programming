#include<stdio.h>
int main()
{
	int n,c,s=0,r;
	printf("enter any number n=");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
    printf("palindrome number");
	else
	printf("entered number is not palendrome ");
	return 0;	
}
