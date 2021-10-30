#include<math.h>
#include"NumClass.h"
int isArmstrong(int a){
int original=a;
int ans=0;
int digits = (int)log10((double)a);
digits=digits+1;
for(int i =0;i<digits;i++){
    ans+=pow((a%10),digits);
    a=a/10;
}
return(original==ans);

}
int isPalindrome(int a){
    int length=(int)(log10(a))+1;
    int A [length] ;
    int j=length-1;
    for(int i=0;i<length;i++){
        A[i]=a%10;
        a=a/10;
    }
    for(int i=0;i<=length/2;i++){
        int FLAG=0;
        if(A[j]==A[i]){
            FLAG =1;
        }
        j--;
        if(FLAG==0){
            return 0;
        }
    }
return 1;
}
