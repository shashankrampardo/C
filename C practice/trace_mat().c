#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int** create2d(short int r)
{
    int **a;
    char i;
    a=(int **)calloc(r,sizeof(int*));
    for(i=0;i<r;i++)
        *(a+i)=(int *)calloc(r,sizeof(int));
    return a;
}
int trace_mat(int **a,short int r)
{
    char i,j;
    int sum=0;
    for(i=0;i<r;i++)
      for(j=0;j<r;j++)
        if(i==j)
          sum=sum+(*(*(a+i)+j));
    return sum;
}
void inpmat(int **a,short int r)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
          scanf("%d",(*(a+i)+j));
}
void outmat(int **a,short int r)
{
    char i,j;
    for(i=0;i<r;i++)
    {
        printf("|");
        for(j=0;j<r;j++)
          printf("%d",*(*(a+i)+j));
       printf("|");
       printf("\n");
    }
}
void main(void)
{
    int **a,sum;
    short int r;
    printf("Enter row for square matrix:");
    scanf("%hd",&r);
    a=create2d(r);
printf("Enter %d elements for matrix:\n",r*r);
    inpmat(a,r);
sum=trace_mat(a,r);
printf("In matrix form:\n");
    outmat(a,r);
printf("Trace of above matrix is %d",sum);

}
