#include <stdio.h>

int main()
{
    int t, n[10], res[10], i, j, k=0, l;

    scanf("%d",&t);

    for(i=0;i<t;i++)
	{
		scanf("%d",n[i]);
	}

    for(i=0; i<t; i++)
    {
	for(j=1; j<=n[i]; j++)
	{
		for(l=1; l<=n[i]; l++)
		{
			if( ( ( (j*l) % (j+l) ) == 0 ) )
			k++;
		}
	}

	res[i] = k;
    }

    for(i=0; i<t; i++)
    {
	printf("\n%d",res[i]);
    }




    return 0;
}
