#include<stdio.h>
#include<stdlib.h>

int main(){
     int n;
     printf("Digite o número da criança igual ou maior que 1: ");
     scanf("%d",&n);

     if(n%2==0){
        printf("PIM");
     }

     if(n%3!=0){
         printf("PAM");
     }

            if(n%2,n%3!=0){
                printf("PIM PAM");
            }

     return 0;

}

