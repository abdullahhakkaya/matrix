//creating by Abdullah Akkaya
#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter the number of rows and columns of the matrix(mxn): ");
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    int retry,i,j;

    do{
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("enter the %d. row and %d. cols: ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]>9)
            {
               printf("%d ",matrix[i][j]); 
            }
            else
            {
                printf("%d  ",matrix[i][j]);
            }}
        printf("\n");
    }
    printf("enter 1 for the new matrix: ");
    scanf("%d",&retry);
    i=0;
    j=0;
    }while(retry==1);

    printf("the program complated.\n");

    return 0;

}
