#include"factfile.c"
#include"logarithmfile.c"
#include"factorialfile.c"
#include"percomfile.c"
#include"powerfile.c"
#include"trigfile.c"
#include"inversetrigfile.c"
#include"arrayfree.c"
#include"divisionfile.c"
#include"multiplicationfile.c"
#include"plusminusfile.c"
#include"bracketfile.c"
float calculatorfuncion()
{
printf("Enter math\n");
char math[300];
scanf("%s",&math);
bracketfree(&math[0]);
factorial(&math[0]);
npr(&math[0]);
ncr(&math[0]);
power(&math[0]);
logarithm(&math[0]);
sine(&math[0]);
cosine(&math[0]);
tangent(&math[0]);
itan(&math[0]);
isine(&math[0]);
icos(&math[0]);
divide(&math[0]);
multiply(&math[0]);
plusminus(&math[0]);


float result=atof(math);
return result;
}










