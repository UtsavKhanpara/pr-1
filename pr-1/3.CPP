#include<stdio.h>
#include<conio.h>

main()

{

	float bs,hra,da,ta,gs;

	clrscr();

	printf("enter the basic salary :");
	scanf("%f",&bs);


	hra=(10*bs)/100;
	printf("hra : %f",hra);


	da=(5*bs)/100;
	printf("\nda : %f",da);


	ta=(8*bs)/100;
	printf("\nta : %f",ta);


	gs=bs+hra+da+ta;

	printf("gross ssalary :%f",gs);

	getch();

}