#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int filedesc = open("numbers.dict", O_RDONLY);
	if (filedesc < 0)
	{
		return (1);
	}
	int i;
	while (i < 10)
	{
		write(filedesc, &i, sizeof(int));
		i++;
	}
	close(filedesc);

	filedesc = open("numbers.dict", O_RDONLY, 0);
	while (read(filedesc, &i, sizeof(int)) != 0) 
	{
    	printf("%d", i);
		printf("\n");
	}
	close(filedesc); 
    return 0;
}

