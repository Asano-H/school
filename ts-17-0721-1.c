#include<stdio.h>
void print_bits(unsigned x){
	int i;
	for(i=7;i>=0;i--){
		putchar((x>>i) & 1U ? '1':'0');
	}
}

int main(void){
	unsigned a=1,b=3,c=5,d=15;
	printf("a & b == b & cの値は%uです\n",a&b==b&c);
	printf("b & d の２進数表\記の下８桁は");
	print_bits(b & d);
	printf("です\n");

	return 0;
}	