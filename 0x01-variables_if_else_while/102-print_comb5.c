<<<<<<< HEAD


=======
<<<<<<< HEAD




#include <stdio.h>



/**
 *
 *   * main - Prints 3 combination of numbers
 *
 *     *
 *
 *       * Return: Always (Success)
 *
 *         */

int main(void)

{

		int c, i, k, j;



			for (c = 48; c <= 57; c++)

					{

								for (i = 48; i <= 57; i++)

											{

															for (k = 48; k <= 57; k++)

																			{

																								for (j = 48; j <= 57; j++)

																													{

																																			if (((k + j) > (c + i) &&  k >= c) || c < k)

																																									{

																																																putchar(c);

																																																						putchar(i);

																																																												putchar(' ');

																																																																		putchar(k);

																																																																								putchar(j);



																																																																													if (c + i + k + j == 227 && c == 57)

																																																																																			{

																																																																																									break;

																																																																																														}

																																																																																		else

																																																																																								{

																																																																																														putchar(',');

																																																																																																			putchar(' ');

																																																																																																								}

																																																																																							}

																																							}

																											}

																	}

									}



				putchar('\n');



					return (0);

}


=======
>>>>>>> e6a41e7ecaf91cfce18993fb6c73ac44a6dd7023
#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
<<<<<<< HEAD
}


=======
>>>>>>> ecddc4a388819a466c0bfa5030d9e65ecd3dc04f
>>>>>>> e6a41e7ecaf91cfce18993fb6c73ac44a6dd7023
