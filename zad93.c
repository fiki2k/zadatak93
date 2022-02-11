// Omoguci korisniku deklariranje i incijaliziranje polja znakova te ispisite string 4 puta na ekran.

#include<stdio.h>

int main() 
{
	char p[] = "Hello world?\n";
	int i;
	
	//prolazimo kroz petlju i ispisujemo.
  	for (i = 1; i <= 4; i++)
		printf("%s", p);
	
  return 0;
}

