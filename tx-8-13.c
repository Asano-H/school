#include<stdio.h>
int main(void){
	
	printf("EOFの値は\"%d\"です。\n",EOF);
	printf("EOFの値は%dです。",EOF);
	putchar('"');	/*「”」と表示*/
	putchar('\"');	/*「”」と表示*/
	putchar('\'');	/*「'」と表示*/
	puts("'");		/*「'」と表示*/

	return 0;
}