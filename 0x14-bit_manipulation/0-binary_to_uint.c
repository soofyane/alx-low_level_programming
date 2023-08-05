unsigned int power(unsigned int exp)
{
	unsigned int result;
        
	result = 1;
	while (exp != 0)
	{
		result *= 2;
		--exp;
	}
	return (result);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len;

	int j;

	i = 0;
	for (len = 0; *(b + len) != '\0'; len++)
		;

	for (j = len - 1; j != -1; j--)
	{
		if (*(b + j) == '0')
			continue;
		else if (*(b + j) == '1')
		{
			i += power((len - 1) - j);
		}
		else
		{
			return (0);
		}
	}
	return (i);
}
