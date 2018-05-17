/*1+2+...+Nを計算する*/

#include<stdio.h>
int main(void){
        int sum,no;
        printf("no: ");
        scanf("%d",&no);
        sum = no*(no+1)/2;
        printf("total= %d\n",sum);

        return 0;
}

/*noの値が46341以上になると－になる 
   → オーバーフローしている
   → int型からdouble型にする*/