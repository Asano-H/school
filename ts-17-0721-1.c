#include<stdio.h>
void print_bits(unsigned x){
	int i;
	for(i=7;i>=0;i--){
		putchar((x>>i) & 1U ? '1':'0');
	}
}

int main(void){
	unsigned a=1,b=3,c=5,d=15;
	printf("a & b == b & c�̒l��%u�ł�\n",a&b==b&c);
	printf("b & d �̂Q�i���\\�L�̉��W����");
	print_bits(b & d);
	printf("�ł�\n");

	return 0;
}	