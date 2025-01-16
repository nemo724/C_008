#include <stdio.h>
enum Size{Short,Tall, Grande, Venti};
const char SizeName[][10] = {"Short","Tall","Grande","venti"};
int Pirce_of_Americano[4] = {3800, 4100, 4600, 5100};
int Price_of_Cappucino[4] = { 4600, 5900,6400, 6900 };

void output_Americano(const char[][10], int[]);




void output_Americano(const char SizeName[][10], int Price_of_Americano[])
{printf("커피 가격표(아메리카노)");

for (int size = Short;size<=Venti;size++)
	{printf("%s : %d\n",SizeName[size],Price_of_Americano[size]);}
}
