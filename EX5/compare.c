#include<stdio.h>
#include<stdlib.h>
int compare(int a,int b);
int compare_absolute(int a, int b);
int  max(int a, int b, int (*compare)(int, int));

int main(void)
{
      int a = 8;
      int b = -10;
      printf("a is :%d, b is :%d\n",a,b);
      int simple=max(a,b,compare);
      int absolute=max(a,b,compare_absolute);
      printf("simple Comparison :max = %d\n",simple);
      printf("Absolute Comparison : max =%d\n",absolute);
      return 0;

}

int compare(int a,int b)
{
   if(a>b){
    return 1;
   }
   if(a<b){
    return -1;
   }
   if(a==b){
    return 0;
   }
}

int compare_absolute(int a,int b)
{
   int abs_a = abs(a);
   int abs_b = abs(b);
   
   if(abs_a > abs_b)
   {
	   return 1;
   }
   if(abs_a < abs_b)
   {
	   return -1;
   }
   if(abs_a == abs_b)
   {
	   return 0;
   }
}
 

int max(int a,int b,int (*compare)(int,int))
{
	if(compare(a,b) >= 0)
	{
		return a;
	}
	else
        {
		return b;
	}
}

