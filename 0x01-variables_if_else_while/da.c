#include <stdio.h>

int main(void)
{
	char name[30]="David Aklamanu";
	{
		printf ("Enter your full name: ");
		scanf ("%s", &name[30]);
		puts (name);
	}
}
