#include<stdio.h>
void show(int v[], int len){
	int i;
	if(i=0; i<len; i++){
		printf("%d",v[i]);
	}
}

int main(void){
	int x[5]={1,30,-5,2,5000};
	show(x,5);
	return 0;
}