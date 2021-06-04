
int linear()
{
printf("Enter the number of variables please\n");
int n,k,c;
scanf("%d",&n);
float A[n+1][n+2],q,C[n+1],S[n+1];
printf("Start entering your inputs\n");
int i,j;
for(i=1;i<=n;i++)
{
 for(j=1;j<=n+1;j++)
 {
  scanf("%f",&A[i][j]);
 }
}
printf("You entered the inputs\n");
for(i=1;i<=n;i++)
{
 for(j=1;j<=n+1;j++)
 {
  if(j==n+1)
  printf("  =  %.2f  ",A[i][j]);
  else
  printf("+%.2f a%d\t",A[i][j],j);
 }
 printf("\n");
}
//calculations
for(i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
{
q=A[i+1][k]/A[k][k];
for(c=1;c<=n+1;c++)
{
C[c]=A[k][c]*q;
A[i+1][c]=A[i+1][c]-C[c];
}
}
}//calculation complete upto this
//printing again
printf("After Gaussian elimination\n");
for(i=1;i<=n;i++)
{
 for(j=1;j<=n+1;j++)
 {
  if(j==n+1)
  printf("  =  %.2f ",A[i][j]);
  else
  printf("%.2f \t",A[i][j],j);
 }
 printf("\n");
//changed result printed
}
S[0]=1;
for(i=n;i>=1;i--)
{
S[i]=A[i][n+1];
for(c=0;;c++)
{
if((n-c)!=i)
S[i]=S[i]-A[i][n-c]*S[n-c];
else if((n-c)==i)
{
 S[i]=S[i]/A[i][i];
 break;
}
}
}
printf("The results are \n  ");
for(i=1;i<=n;i++)
    printf("%.2f\t",S[i]);

}
