#include<stdio.h>
#include<conio.h>
int main(){
    int st[50][5][10], i, j, k, n, m, t, sum;
    float per;
    printf("\nHow many student are in the class : ");
    scanf("%d", &n);
    printf("\nIn how many House test every student appear : ");
    scanf("%d", &t);
    printf("\nHow many subject in every House test: ");
    scanf("%d",&m);
    printf("\nEnter the Data :");
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            for(k = 1; k <= t; k++){
                scanf("%d", &st[i][j][k]);
            }
        }
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            sum = 0;
            for(k = 1; k <= t; k++){
                sum = sum + st[i][j][k];
            }
            per = (float)sum/n;
            printf("\nAverage marks of %dth student in %dth House test is: %f", i, j, per);
        }
    }
    getch();
    return(0);
}