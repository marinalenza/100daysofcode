short parity(long int x)
{
	int countOne = 0;
	int parity = 0;
	while(x)
	{
		countOne += x & 1;
		x >>= 1;
	}
	parity = countOne % 2;
	return parity;
}