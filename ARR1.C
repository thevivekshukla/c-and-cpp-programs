/* some experiments with pointer and array */

#include<stdio.h>
#include<conio.h>
int main()
{
	int *j,*k;
	int i=4,a,b,c;
	int bc=1, ab=2;
	int z=1,y=2,x=3;
	int marks[]={50,68,90};


	j=&marks[0];
	k=&marks[2];
	printf("j=%u k=%u",j,k);
	printf("\n%u %d",&k-&j,*k-*j);

	j=&i;
	j=j+2;
	printf("\n%u",&i);
	printf("\nj=%u",j);

	printf("\n\nx=%d y=%d z=%d",x,y,z);
	printf("\n\nx=%u y=%u z=%u",&x,&y,&z);


	a=i;
	b=i++;
	c=++i;
	printf("\ni=%d i++=%d ++i=%d",a,b,c);
	printf("\ni=%u i++=%u ++i=%u",&a,&b,&c);

	printf("\nab=%u bc=%u",&ab,&bc);
	return 0;
}
