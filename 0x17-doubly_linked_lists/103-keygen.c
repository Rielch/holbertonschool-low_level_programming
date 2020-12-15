#include <stdlib.h>
#include <stdio.h>

/**
 * f1 - crack first character
 *
 * @len: length username
 * Return: value
 */

int f1(int len)
{
	return (((len ^ 0x3b) & 0x3f));
}

/**
 * f2 - crack second character
 *
 * @usr: username
 * @len: length username
 * Return: value
 */

int f2(char *usr, int len)
{
	int a, b = 0;

	for (a = 0; a < len; a++)
	{
		b += usr[a];
	}
	b = ((b ^ 0x4f) & 0x3f);
	return (b);
}

/**
 * f3 - crack third character
 *
 * @usr: username
 * @len: length username
 * Return: value
 */

int f3(char *usr, int len)
{
	int a, b = 1;

	for (a = 0; a < len; a++)
	{
		b *= usr[a];
	}
	return ((b ^ 0x55) &0x3f);
}

/**
 * f4 - crack fourth character
 *
 * @usr: username
 * @len: length username
 * Return: value
 */

int f4(char *usr, int len)
{
	int a, b = usr[0];

	for (a = 0; a < len; a++)
	{
		if (usr[a] > b)
		{
			b = usr[a];
		}
	}
	srand(b ^ 0xe);
	b = rand() & 0x3f;
	return (b);
}

/**
 * f5 - crack fifth character
 *
 * @usr: username
 * @len: length username
 * Return: value
 */

int f5(char *usr, int len)
{
	int a, b = 0;

	for (a = 0; a < len; a++)
	{
		b += usr[a] * usr[a];
	}
	return ((b ^ 0xef) & 0x3f);
}

/**
 * f6 - crack sixth character
 *
 * @usr: username
 * Return: value
 */

int f6(char usr)
{
	int a, b = 0;

	for (a = 0; a < usr; a++)
	{
		b = rand();
	}
	return ((b ^ 0xe5) & 0x3f);
}

/**
 * main - crack the password for crackme5
 *
 * @argc: argument count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	char *data = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char password[6];
	int len;

	if (argc != 2)
	{
		printf("Usage %s username", argv[0]);
		return (1);
	}
	for (len = 0; argv[1][len] != 0; len++)
	{
	}
	password[0] = data[f1(len)];
	password[1] = data[f2(argv[1], len)];
	password[2] = data[f3(argv[1], len)];
	password[3] = data[f4(argv[1], len)];
	password[4] = data[f5(argv[1], len)];
	password[5] = data[f6(argv[1][0])];
	printf("%s", password);
	return (0);
}
