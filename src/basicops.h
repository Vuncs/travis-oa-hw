namespace basicops
{

	int add(int a, int b)
	{
		return a + b;
	}

	int sub(int a, int b)
	{
		return a - b;
	}

	int div(int a, int b)
	{
		if (b != 0)
		{
			return a / b;
		}
		return 0xFFFFFFFF;
	}

	int multi(int a, int b)
	{
		return a * b;
	}

}

