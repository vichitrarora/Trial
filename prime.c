#include<stdio.h>
void main()
{
    int a,i,b=0;
    printf("enter the no you want to check whether prime or not ");
    scanf("%d",&a);
    if(a<2) printf("neither prime nor composite");
    else{
    for(i=2;i<a;i++){
        if(a%i==0){
            b=1;
            break;       
    }
    }
    if(b==1)
    printf("composite");
    else{
        printf("prime");
    }
    }
}