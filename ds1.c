#include<stdio.h>
int main()
{
    int matrix[10][10],sparse[20][3];
    int i,j,rows,cpls,k=1;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&rows,&cpls);
    printf("Enter the elements:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cpls;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cpls;j++)
        {
            if(matrix[i][j]!=0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=matrix[i][j];
                k++;
            }
        }
    }
    sparse[0][0]=rows;
    sparse[0][1]=cpls;
    sparse[0][2]=k-1;
    printf("The sparse matrix is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\t%d\t%d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }
    return 0;


}