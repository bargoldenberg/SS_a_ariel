#include<math.h>
#include"NumClass.h"
/*This function uses a for loop to sum all digits in a given number, each digit will be
 put to the power of the amount of digits, it is done by using modulo and divition opererators on integers.
 */
int isArmstrong(int a){
if(a<0){
return 0;
}
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
/*In this function we put each digit of the number into an array, then we assign two pointers to 
the first element and the last element of the array. we check if they are equal and continue in the loop.
if not, return false.
*/
int isPalindrome(int a){
if(a<0){
return 0;
}
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
