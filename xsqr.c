

void xsqr()
{
    double a, b, c, determinant, root1,root2, realPart, imaginaryPart;
    printf("ax^2+bx+c=0\n");
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    determinant = b*b-4*a*c;

    // condition for real and different roots
    if (determinant > 0)
    {
    // sqrt() function returns square root
        root1 = (-b+sqrt(determinant))/(2*a);
        root2 = (-b-sqrt(determinant))/(2*a);

        printf("x1 = %.2lf and x2 = %.2lf",root1 , root2);
    }

    //condition for real and equal roots
    else if (determinant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("x1 = x2 = %.2lf;", root1);
    }

    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
