#include<stdio.h>
#include<conio.h>
int main(){
    int i = 0, c = 0;
    char string[80];
    printf("\nEnter the string: ");
    gets(string);
    for(i = 0; string[i]!='\0'; ++i){
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z')){
            ++c;
        } else{
            continue;
        }
    }
    printf("\nTotal character are = %d", c);
    getch();
    return(0);
}
