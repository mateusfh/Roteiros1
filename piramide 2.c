#include <stdio.h>


int main(int argc, char const *argv[])
{
	int j, i, n;
	printf ("Digite o n:");
	scanf ("%d", &n);

	for (i=1; i <= n; i++){
		for (j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf ("\n");
	}
	return 0;
}
