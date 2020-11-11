#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, k, r1, c1, r2, c2;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter the no of row && coloum of first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the no of row && coloum of second matrix : ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2){
        goto End;
    }
    printf("Enter the value of first matrix : ");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value of second matrix : ");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i<r1; i++){
        for(j = 0; j<c2; j++){
            c[i][j] = 0;
            for(k = 0; k<r2; k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMultiplication is : ");
    for(i = 0; i<r1; i++){
        printf("\n");
        for(j = 0; j < c2; j++){
            printf("%3d", c[i][j]);
        }
    }
    End:
    getch();
    return(0);
}
