#include<math.h>
#include<stdio.h>
#include"NumClass.h"
/*helper function that uses recursion to sum all digits in a given number, each digit will be
 put to the power of the amount of digits, it is done by using modulo and divition opererators on integers.
 */
int isarmstrongrec(int a,int length){
if(a<0){
return 0;
}
    int currsize=(int)log10(a)+1;
    if(currsize==1){
        return pow(a,length);
    }else{
        return pow(a%10,length)+isarmstrongrec(a/10,length);
    }
}
/*main function that calls helper function.
*/
int isArmstrong(int a){
    int length= (int)log10(a)+1;
    return a==isarmstrongrec(a,length);
}
/*In this function we put each digit of the number into an array, then we assign two pointers to 
the first element and the last element of the array. we check if they are equal and continue in the recursion.
if not, return false.
*/
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
if(a<0){
	return 0;
}
   int length=(int)log10((double)a)+1; 
   char A[length];
   sprintf(A,"%d",a);
   int n = sizeof(A) / sizeof(char);
    return ispalirec(A,0,n-1);
   

}


