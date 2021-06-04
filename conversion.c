

int conversion()
{
    system("cls");
    printf("which conversion u want?\n1.inch-->cm \n2.cm-->inch \n3.ft-->meter \n4.meter-->ft \n5.yd-->m \n6.m-->yd \n7.mile-->km \n8.km-->mile \n9.acre-->m^2 \n10.m^2-->acre \n11.gal(US)-->l \n12.l-->gal(US) \n13.pc-->km \n14.km-->pc \n15.km/h-->m/s \n16.m/s-->km/h \n17.oz-->gram \n18.gram-->oz \n19.lb-->kg \n20.kg-->lb \n21.atm-->pa \n22.pa-->atm\n");
    printf("23.mmHg-->Pa\n24.Pa-->mmHg\n25.hp-->kW\n26.kW-->hp\n27.farenhite-->celcius\n28.celcius-->farenhite\n29.jule-->calory\n30.calory-->jule\n31.kgf/cm^2-->Pa\n32.Pa-->kgf/cm^2");
    float inch,cm,ft,meter,yd,mile,km,acre,gal,l,pc,b,c,d,oz,gram,lb,kg,atm,Pa,mmHg,hp,kW,x,farenhite,celcius,calory,jule;
    int option;
    printf("\n\nenter a number:");
    scanf("%d",&option);
    if(option==1)
    {
        system("cls");
        printf("enter the value of inch:");
        scanf("%f",&inch);
        cm=2.54*inch;
        printf("\n\n%g inch  -->  %g cm\n\n",inch,cm);
        printf("thank you!!hope you enjoyed...");

    }
    if(option==2)
    {
        system("cls");
        printf("enter the value of cm:");
        scanf("%f",&cm);
        inch=0.3937*cm;
        printf("\n\n%g cm  -->  %g inch\n\n",cm,inch);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==3)
    {
        system("cls");
        printf("enter the value of ft:");
        scanf("%f",&ft);
        meter=0.3048*ft;
        printf("\n\n%g ft  -->  %g meter\n\n",ft,meter);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==4)
    {
        system("cls");
        printf("enter the value of meter:");
        scanf("%f",&meter);
        ft=3.2808*meter;
        printf("\n\n%g meter  -->  %g ft\n\n",meter,ft);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==5)
    {
        system("cls");
        printf("enter the value of yd:");
        scanf("%f",&yd);
        meter=0.9144*yd;
        printf("\n\n%g yd  -->  %g meter\n\n",yd,meter);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==6)
    {
        system("cls");
        printf("enter the value of meter:");
        scanf("%f",&meter);
        yd=1.0936*meter;
        printf("\n\n%g meter  -->  %g yd\n\n",meter,yd);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==7)
    {
        system("cls");
        printf("enter the value of mile:");
        scanf("%f",&mile);
        km=1.6093*mile;
        printf("\n\n%g mile  -->  %g km\n\n",mile,km);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==8)
    {
        system("cls");
        printf("enter the value of km:");
        scanf("%f",&km);
        mile=0.6214*km;
        printf("\n\n%g km  -->  %g mile\n\n",km,mile);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==9)
    {
        system("cls");
        printf("enter the value of acre:");
        scanf("%f",&acre);
        b=4046.856*acre;
        printf("\n\n%g acre  -->  %g m^2\n\n",acre,b);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==10)
    {
        system("cls");
        printf("enter the value of m^2:");
        scanf("%f",&b);
        acre=0.000247*b;
        printf("\n\n%g m^2  -->  %g acre\n\n",b,acre);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==11)
    {
        system("cls");
        printf("enter the value of gal(US):");
        scanf("%f",&gal);
        l=3.7854*gal;
        printf("\n\n%g gal(US)  -->  %g l\n\n",gal,l);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==12)
    {
        system("cls");
        printf("enter the value of l:");
        scanf("%f",&l);
        gal=0.2642*l;
        printf("\n\n%g l  -->  %g gal(US)\n\n",l,gal);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==13)
    {
        system("cls");
        printf("enter the value of pc:");
        scanf("%f",&pc);
        km=3.08567*pow(10,13)*pc;
        printf("\n\n%g pc  -->  %g km\n\n",pc,km);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==14)
    {
        system("cls");
        printf("enter the value of km:");
        scanf("%f",&km);
        pc=3.24077885*pow(10,-14)*km;
        printf("\n\n%g km  -->  %g pc\n\n",km,pc);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==15)
    {
        system("cls");
        printf("enter the value of km/h:");
        scanf("%f",&c);
        d=0.277777*c;
        printf("\n\n%g km/h  -->  %g m/s\n\n",c,d);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==16)
    {
        system("cls");
        printf("enter the value of m/s:");
        scanf("%f",&d);
        c=3.6*d;
        printf("\n\n%g m/s  -->  %g km/h\n\n",d,c);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==17)
    {
        system("cls");
        printf("enter the value of oz:");
        scanf("%f",&oz);
        gram=28.34952*oz;
        printf("\n\n%g oz  -->  %g gram\n\n",oz,gram);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==18)
    {
        system("cls");
        printf("enter the value of gram:");
        scanf("%f",&gram);
        oz=0.035274*gram;
        printf("\n\n%g gram  -->  %g oz\n\n",gram,oz);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==19)
    {
        system("cls");
        printf("enter the value of lb:");
        scanf("%f",&lb);
        kg=0.45359*lb;
        printf("\n\n%g lb  -->  %g kg\n\n",lb,kg);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==20)
    {
        system("cls");
        printf("enter the value of kg:");
        scanf("%f",&kg);
        lb=2.20462*kg;
        printf("\n\n%g kg  -->  %g lb\n\n",kg,lb);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==21)
    {
        system("cls");
        printf("enter the value of atm:");
        scanf("%f",&atm);
        Pa=101325*atm;
        printf("\n\n%g atm  -->  %g Pa\n\n",atm,Pa);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==22)
    {
        system("cls");
        printf("enter the value of Pa:");
        scanf("%f",&Pa);
        atm=9.86923*pow(10,-6)*Pa;
        printf("\n\n%g Pa  -->  %g atm\n\n",Pa,atm);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==23)
    {
        system("cls");
        printf("enter the value of mmHg:");
        scanf("%f",&mmHg);
        Pa=133.3224*mmHg;
        printf("\n\n%g mmHg  -->  %g Pa\n\n",mmHg,Pa);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==24)
    {
        system("cls");
        printf("enter the value of Pa:");
        scanf("%f",&Pa);
        mmHg=0.00750062*Pa;
        printf("\n\n%g Pa  -->  %g mmHg\n\n",Pa,mmHg);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==25)
    {
        system("cls");
        printf("enter the value of hp:");
        scanf("%f",&hp);
        kW=0.7457*hp;
        printf("\n\n%g hp  -->  %g kW\n\n",hp,kW);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==26)
    {
        system("cls");
        printf("enter the value of kW:");
        scanf("%f",&kW);
        hp=1.341022*kW;
        printf("\n\n%g kW  -->  %g hp\n\n",kW,hp);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==27)
    {
        system("cls");
        printf("enter the value of farenhite:");
        scanf("%f",&farenhite);
        celcius=(-17.2222)*farenhite;
        printf("\n\n%g farenhite  -->  %g celcius\n\n",farenhite,celcius);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==28)
    {
        system("cls");
        printf("enter the value of celcius:");
        scanf("%f",&celcius);
        farenhite=33.8*celcius;
        printf("\n\n%g celcius  -->  %g farenhite\n\n",celcius,farenhite);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==29)
    {
        system("cls");
        printf("enter the value of jule:");
        scanf("%f",&jule);
        calory=0.2389*jule;
        printf("\n\n%g jule  -->  %g calory\n\n",jule,calory);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==30)
    {
        system("cls");
        printf("enter the value of calory:");
        scanf("%f",&calory);
        jule=4.1858*calory;
        printf("\n\n%g calory  -->  %g jule\n\n",calory,jule);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==31)
    {
        system("cls");
        printf("enter the value of kgf/cm^2:");
        scanf("%f",&x);
        Pa=98066.5*x;
        printf("\n\n%g kgf/cm^2  -->  %g Pa\n\n",x,Pa);
        printf("thank you!!hope you enjoyed...");
    }
    if(option==32)
    {
        system("cls");
        printf("enter the value of Pa:");
        scanf("%f",&Pa);
        x=1.0197162*pow(10,-5)*Pa;
        printf("\n\n%g Pa  -->  %g kgf/cm^2\n\n",Pa,x);
        printf("thank you!!hope you enjoyed...");
    }
}

