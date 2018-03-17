
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
main()
{
	int js,x,h[10]={};
	srand(time(NULL));
	int i=1,rst;
	printf("Jeton sayisi:"); scanf("%d",&js);
for(;i<=js;i++)
{
	int tt=0;
	for(int c=0;c<9;c++)
	{
		rst=rand()%2+1;
		tt=rst+tt;
	}
	printf("%d.Jetonu atmak icin herhangi bir tusa basiniz --> ",i); _getch();
	printf("%d.hazneye dustu...\n",tt-8);
	for(int q=1;q<11;q++)
{
	if(tt-8==q)
	{
		h[q-1]++;
	}
}
}
printf("\n");
for(int w=0;w<10;w++)
	{
		printf("%d. haznedeki jeton sayisi: %d\n",w+1,h[w]);
	}
	int max=0;
	for(int b=0;b<10;b++)
	{
		if(max<h[b])
		{
			max=h[b];
		}}
printf("\nJetonlarin histogram seklinde dagilimlari:\n\n");
for(int a=max;a>0;a--)
{
	if(a<10)
{
		printf(" "); }
	printf("%d|",a);
	for(int j=0;j<=9;j++)
	{
			if(a==h[j])
		{
			printf("  o  |");
			h[j]--;
			}
			else
			printf("     |");
		}
		printf("\n"); }

printf("--+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
printf("  |  1     2     3     4     5     6     7     8     9     10 |");

}



