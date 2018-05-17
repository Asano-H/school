/*1/7,2/7,...を計算する*/

#include<stdio.h>
int main(void){
		int i;
        double no=1.0;
        double num;
        for(i=1;i<7;i++){

            printf("%d/7 = %18.15lf\n",i,no/7);
            no = no + 1.0;
        }
        return 0;

}