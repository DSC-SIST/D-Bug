#include <stdio.h>
float kmph;              /* kilometers per hour */
float miph;              /* miles per hour (to be computed) */
char  line_text[50];      /* a line from the keyboard */

int main()
{
	printf("Input kilometers per hour: );
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &kmph);

	miph = (kmph);
	printf("%f miles per hour\n", miph);

	return(0);
}