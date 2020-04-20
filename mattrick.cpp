#include "stdio.h"
#include "conio.h"
#include "string.h"
int main()
{
       int a[3][3],b[3][3],c[3][3],i,j;
 
       for(i=0; i<2; i++)
             for(j=0; j<2; j++){
                  printf("Enter Matrix A [%d][%d]:",i,j);
                  scanf("%d",&a[i][j]);
            }
       for(i=0; i<2; i++)
             for(j=0; j<2; j++){
                  printf("Enter Matrix B [%d][%d]:",i,j);
                  scanf("%d",&b[i][j]);
            }
 

 printf("\t\t\t----------------------------------\n");
 printf("\t\t\t  Matrix A + Matrix B = Matrix C\n");
 printf("\t\t\t----------------------------------\n\n");
       for(i=0;i<2;i++){
             for(j=0;j<2;j++){
                  c[i][j] = a[i][j]+b[i][j];
                  printf("\t\tA[%d]+B[%d] = C:%d    ",a[i][j],b[i][j],c[i][j]);
            }
       printf("\n");
    }
 return 0;
}
