#include <stdio.h>
enum Size{Short,Tall, Grande, Venti};
const char SizeName[][10] = {"Short","Tall","Grande","venti"};
int Price_of_Americano[4] = {3800, 4100, 4600, 5100};
int Price_of_Cappucino[4] = { 4600, 5900,6400, 6900 };

void output_Americano(const char[][10], int[]);
void output_Cappucino(const char[][10], int[]);



void output_Americano(const char SizeName[][10], int Price_of_Americano[])
{printf("커피 가격표(아메리카노)\n");

for (int size = Short;size<=Venti;size++)
	{printf("%-8s : %5d\n",SizeName[size],Price_of_Americano[size]);}
}


void output_Cappucino(const char SizeName[][10], int Price_of_Cappucino[])
{printf("커피 가격표(카푸치노)\n");

for (int size = Short;size<=Venti;size++)
	{printf("%-8s : %5d\n",SizeName[size],Price_of_Cappucino[size]);}
}


int main(void)
{output_Americano(SizeName, Price_of_Americano);
output_Cappucino(SizeName, Price_of_Cappucino);}