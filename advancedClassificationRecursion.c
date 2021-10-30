#include<math.h>
#include<stdio.h>
#include"NumClass.h"
int isarmstrongrec(int a,int length){
    int currsize=(int)log10(a)+1;
    if(currsize==1){
        return pow(a,length);
    }else{
        return pow(a%10,length)+isarmstrongrec(a/10,length);
    }
}
int isArmstrong(int a){
    int length= (int)log10(a)+1;
    return a==isarmstrongrec(a,length);
}
int ispalirec(char A[],int i,int j){
 if(i==j||(i==j-1&&A[i]==A[j])){
     return 1;
 }else if(A[j]!=A[i]){
     return 0;
 }else{
     return ispalirec(A,++i,--j);
 }

}
int isPalindrome(int a){
   int divider=log10(a); 
   int length=divider+1;
   char A[length];
   sprintf(A,"%d",a);
   int n = sizeof(A) / sizeof(char);
    return ispalirec(A,0,n-1);
   

}


