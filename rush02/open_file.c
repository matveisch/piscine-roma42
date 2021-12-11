#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fh;
	int rd;
	char buffer[2048];
	
	fh = open("numbers.dict", O_RDONLY);
	while ((rd = read(fh, buffer, 2048)) != 0)
	{
		buffer[rd] = '\0';
		printf("%s", buffer);
	}
}