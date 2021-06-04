void xcube()
{
float a,b,c,d;
printf("ax^3+bx^2+cx+d=0\n");
printf("Enter the values of a,b,c and d\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
system("cls");
printf("a=%.2f\tb=%.2f\tc=%.2f\td=%.2f\n",a,b,c,d);
float Q=(3*a*c-b*b)/(9*a*a);
printf("Q=%f\n",creal(Q));
float R=(9*a*b*c-27*a*a*d-2*b*b*b)/(54*a*a*a);
printf("R=%f\n",creal(R));
float  X =cpow(Q*Q*Q+R*R,0.5);
float S=cbrt(R+X);
printf("S=%f\n",creal(S));
float T=cbrt(R-X);
printf("T=%f\n",creal(T));
float x1=S+T-b/(3*a);
printf("\n x1=%.2f",x1);
float rx2,ix2;
rx2=-(S+T)/2-b/(3*a);
ix2=0.866*(S-T);
if (ix2==0)
    printf("\n x2=%.2f",rx2);
else
    printf("\n x2=%.2f + (%.2f) i ",rx2,ix2);
float rx3,ix3;
rx3=-(S+T)/2-b/(3*a);
ix3=-0.866*(S-T);
if (ix3==0)
    printf("\n x3=%.2f",rx3);
else
    printf("\n x3=%.2f + (%.2f) i ",rx3,ix3);

}

