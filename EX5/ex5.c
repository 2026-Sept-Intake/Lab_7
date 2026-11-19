#include <stdio.h>
#include <stdlib.h>

int compare(int a,int b)
{
	if(a>b) return 1;
	if(b>a) return -1;
	return 0;
}
int compare_absolute(int a,int b)
{
	return compare (abs(a),abs(b));
}
int max (int a,int b,int(*cmp)(int,int))

{
	if(cmp(a,b)>=0)
		return a;
	return b;
}
int main()
{
	int a,b;
	printf("enter a and b: ");
	scanf("%d" "%d",&a,&b);

	printf("simple comparison: max=%d\n",max(a,b,compare));
	printf("absolute comparison:max=%d\n",max(a,b,compare_absolute));
	return 0;
}



