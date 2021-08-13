#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int power(int x,int n);
int main()
{
    int i,sum =0,ctoi=0;
    char bin[100],binrev[100];
    gets(bin);
    strcpy(binrev,strrev(bin));
    for(i=0;bin[i]!='\0';i++){
        ctoi = bin[i] - '0';
        sum = sum+(ctoi*power(2,i));
    }
    printf("The decimal of %s is = %d\n",strrev(bin),sum);
    return 0;
}
int power(int x,int n){
    if(n==0)
        return 1;
    if(x==0)
        return 0;
    else{
        int y = 1,count = 0;
        do{
            y = y * x;
            count++;
        }while(count < n);
        return y;
    }
}
