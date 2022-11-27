 //finding the Minimum of the given numbers.

#include <stdio.h>
int main (){
int n;
int arr[23];
//finding the minimum number of all the given numbers.
printf("Enter the nubmer of numbers you want to enter: ");
scanf("%d",&n);
int i=0;
while (i<n){
printf("Enter the %d number in the array: ",i);
scanf("%d",&arr[i]);
i++;
}
int Min = arr[0];
for (int i =1; i<n; i++) {
if (Min > arr[i]){
Min = arr[i];
}
}
printf("The Minimum of the given numbers is %d",Min);
return 0;
}
