/*指定された範囲の乱数を作る*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int x;
	double y,z;
	srand(time(NULL));

	for(int i=0;i<100;i++){
		x = (rand()%22)-9;
		y = ((double)rand())/(RAND_MAX+1.0);
		z = (y*6.28)-3.14;

		printf("x = %3d ",x);
		printf("y = %f ",y);
		printf("z = %f ",z);
		printf("\n");
	}
	return 0;

}