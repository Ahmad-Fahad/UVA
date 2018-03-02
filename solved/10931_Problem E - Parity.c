#include<stdio.h>
int main()
{
	while(1) {
		unsigned long int I  = 0, counter = 0, remainder = 0, p = 1, temp = 0, bin[100], i=0;
		scanf("%lu", &I);
		if(I == 0) {
			break;
		}
		else {
			while(I != 0) {
				remainder = I % 2;
				if(remainder == 1) {
					counter++;
				}
				I = I/2;
				bin[i] = remainder;
				i++;

			}
			int j;
			printf("The parity of ");
			for(j=i-1; j>=0; j--) {
                printf("%lu",bin[j]);
			}
			printf(" is %lu (mod 2).\n", counter);

		}
	}

    return 0;
}

