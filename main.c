#include <stdio.h>
#include "NumClass.h"
int main(){
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);
printf("\n");
printf("1 The Armstrong Numbers are: ");
for(int i =a;i<=b;i++){
    if(isArmstrong(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("2 The Palindroms are: ");
for(int i =a;i<=b;i++){
    if(isPalindrome(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("3 The Prime Numbers are: ");
for(int i =a;i<=b;i++){
    if(isPrime(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("4 The Strong Numbers are: ");
for(int i =a;i<=b;i++){
    if(isStrong(i)){
        printf("%d ",i);
    }
}
printf("\n");
return 0;
}