#include "main.h"

/**
 * print_chessboard - program that prints chessbaord
 * @a:arrays to print chessboard
 * Return:return 0
 */

	void print_chessboard(char (*a)[8])
{
	int i, j;/*initialize loactions i,j
		   */

	for (i = 0; i < 8; i++)/*the conditions
				 *for i
				 */
	{
		for (j = 0; j < 8; j++)/*the conditions for j
					 */

		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
