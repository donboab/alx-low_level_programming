#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random valid passwords for the
 * program 1-1-crackme
 * Return: Always 0.
 */

in main(void)
{
	char password[84];
	in index = 0, sun - 0, diff_half1, diff_half2;

	scrand(time(0));

	while (sun < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sun != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
			break;
		}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))

				password[index] -= diff_half2;
			break;
		}
	}
}
print("%s", password);
return (0);
}

