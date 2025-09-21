#include <stdio.h>
#include <conio.h>
int main()
{
	float millimeter, centimeter, meter, kilometer;
	printf("\n Please Enter the Length in Kilometer (km):");
	scanf("%f", &kilometer);
	
	
	meter=kilometer*1000.0;
	centimeter=kilometer*100000.0;
	millimeter=kilometer*1000000.0;
	
	printf("\n %.2f kilometers=%.2f meters", kilometer, meter);
	printf("\n %.2f kilometers=%.2f centimeters", kilometer, centimeter);
	printf("\n %.2f kilometers=%.2f millimeters", kilometer, millimeter);
	getch();
}
