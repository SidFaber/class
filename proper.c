#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[50];
	printf ("Enter string: ");
	fgets (str, sizeof str, stdin);
	str[0] &= ~(1 << 5);
	printf ("%s", str);
}

