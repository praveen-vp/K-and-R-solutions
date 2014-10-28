
int is_upper(char c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int main()
{
	char c = 'S';

	printf("%d\n",is_upper('S'));
}

