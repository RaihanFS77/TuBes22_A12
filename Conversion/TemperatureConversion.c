#include "TemperatureConversion.h"
void temperatureConvMain(){
	int choice;
	startingPoint:
	printf("1. konversi dari celcius\n");
	printf("2. konversi dari fahrenheit\n");
	printf("3. konversi dari kelvin\n");
	printf("masukkan pilihan anda : ");
	scanf("%d",&choice);
	switch(choice){
		case 1 : fromCelcius(getTemperatureValueToConv());break;
		case 2 : fromFahrenheit(getTemperatureValueToConv());break;
		case 3 : fromKelvin(getTemperatureValueToConv());break;
		default : printf("pilihan tersebut tidak ada\n");goto startingPoint;break;
	}
}
float getTemperatureValueToConv(){
	float value;
	printf("masukkan angka yang akan dikonversi : ");
	scanf("%f",&value);
	return value;
}
//Fahrenheit to Celcius
Celcius FToC(Fahrenheit toConvert){
	return ((toConvert -32) *5/9);
}
//Kelvin to Celcius
Celcius KToC(Kelvin toConvert){
	return (toConvert -273.15);
}
//Celcius to Kelvin
Kelvin CToK(Celcius toConvert){
	return (toConvert + 273.15);
}
//Celcius to Fahrenheit
Fahrenheit CToF(Celcius toConvert){
	return ((toConvert * 9/5) + 32);
}
void fromCelcius(Celcius temperature){
	printf("%.2f celcius sama dengan %.2f fahrenheit\n",temperature,CToF(temperature));
	printf("%.2f celcius sama dengan %.2f kelvin\n",temperature,CToK(temperature));
}
void fromKelvin(Kelvin temperature){
	printf("%.2f kelvin sama dengan %.2f celcius\n",temperature,KToC(temperature));
	printf("%.2f kelvin sama dengan %.2f celcius\n",temperature,CToF(KToC(temperature)));
}
void fromFahrenheit(Fahrenheit temperature){
	printf("%.2f fahrenheit sama dengan %.2f celcius\n",temperature,FToC(temperature));
	printf("%.2f fahrenheit sama dengan %.2f celcius\n",temperature,CToK(FToC(temperature)));
}
