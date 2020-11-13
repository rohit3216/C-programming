/* Program to display data with an array */
#include<stdio.h>
#include<conio.h>
int main(){
    int a[50], i, n;
    printf("\nHow many number you want to enter : ");
    scanf("%d", &n);
    printf("Enter the %d different elements in the array :\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nDifferent array elements are :\n");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    getch();
    return(0);
}