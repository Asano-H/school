#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ransu(void){
	int a;
	srand((unsigned)time(NULL));
		a=rand();
	return a;
}


int main(void){
	int x;
	double y,z;

	for(int i=0;i<100;i++){
		x = (ransu()%(22))-9;
		y = ((double)ransu())/(RANDMAX+1.0);
		x = y*3.14*3;

		printf("x = %d ",x);
		printf("y = %f ",y);
		printf("z = %f ",z);
		printf("\n");
	}
	return 0;

}