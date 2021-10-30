#include<math.h>
#include"NumClass.h"
int isPrime(int a){
int ans =1;
for(int i =2;i<a;i++){
    if(a%i==0){
        ans=0;
    }
}
return ans;
}

int Factorial(int x){
int ans =1;
int count=1;
while(count<x){
    ans=ans*++count;
}
return ans;
}

int isStrong(int a){
int original=a;
int ans=0;
int digits = (int)log10((double)a);
digits=digits+1;
for(int i =0;i<digits;i++){
    ans+=Factorial(a%10);
    a=a/10;
}
return(original==ans);
}

