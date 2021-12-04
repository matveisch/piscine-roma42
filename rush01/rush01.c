int		initboard(int *input)
{
	int		rig;
	int		col;
	int		board[4][4];

	rig = 0;
	col = 0;
	//this loop fills the table up with 0
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[rig][col] = 0;
			col++;
		}
		rig++;
	}
	//we start filling up the table
	lookfor1(board, input);
	//when we are done with putting a few numbers (firts row and column – in our
	//case) we start)
	if ((doyourstuff(board, input)) == 1)
		stampa(board);
	else
		write(1, "\nERR - No Solution\n\n", 20);
	return (0);
}

void	lookfor1(int board[4][4], int *input)
{
	int pos;

	pos = 0;
	//filling up the table with 4s next to 1s
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	lookfor4_0(board, input);
}

void	lookfor4_0(int board[4][4], int *input)
{
	int pos;
	int fill;

	pos = 0;
	fill = 0;
	//it fills rows that has 4 inside already with 123
	while ((input[pos]) && pos < 8)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
			while (fill < 4)
			{
				board[fill][pos] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		pos++;
	}
	lookfor4_1(board, input, pos);
}

void	lookfor4_1(int board[4][4], int *input, int pos)
{
	int fill;

	fill = 0;
	//it does the same thing, but loops through the other part of
	//input array. But in our case it just rewrites numbers with the same ones
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		pos++;
	}
}
