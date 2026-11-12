#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b);
int compare_absolute(int a , int b);
int max(int a , int b , int(*compare)(int ,int));


int main(void){
	
	int (*funPtr1)(int , int) = &compare;
	int (*funPtr2)(int, int ) = &compare_absolute;
	
	int a,b;

	printf("Enter the value of a: ");
	scanf("%d",&a);

	printf("Enter the value of b: ");
	scanf("%d",&b);
		
	int standardMax = max(a,b,funPtr1);
	printf("the simple comparison max : %d\n",standardMax);

	int absMax = max(a,b,funPtr2);
        printf("the absolute comparison  max : %d\n",absMax);


	return 0;
}

int compare(int a, int b){
	if(a>b){
		return 1;
	}else if (b>a){
		return -1;
	}else{
		return 0;
	}

}


int compare_absolute(int a , int b){
	int abs_a = abs(a);
	int abs_b = abs(b);

	if(abs_a>abs_b){
                return 1;
        }else if (abs_b>abs_a){
                return -1;
        }else{
                return 0;
        }


}

int max(int a , int b , int(*compare)(int ,int)){
	int return_val = compare(a,b);

	if(return_val>0){
		return a;
	}else if(return_val<0){
		return b;
	}
}

