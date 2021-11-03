#include <stdio.h>
#include "NumClass.h"
int main(){
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);
if(a<1){
    a=1;
}else if(b<1){
    b=1;
}
printf("The Armstrong Numbers are: ");
for(int i =a;i<=b;i++){
    if(isArmstrong(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("The Palindroms are: ");
for(int i =a;i<=b;i++){
    if(isPalindrome(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("The Prime Numbers are: ");
for(int i =a;i<=b;i++){
    if(isPrime(i)){
        printf("%d ",i);
    }
}
printf("\n");
    printf("The Strong Numbers are: ");
for(int i =a;i<=b;i++){
    if(isStrong(i)){
        printf("%d ",i);
    }
}
printf("\n");
return 0;
}