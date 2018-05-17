#include<stdio.h>
void show(int v[], int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d”Ô–Ú‚Ì—v‘fF%d\n",i,v[i]);
	}
}

int main(void){
	int x[5]={1,30,-5,2,5000};
	show(x,5);
	return 0;
}