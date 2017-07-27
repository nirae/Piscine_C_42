/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 18:31:16 by mfonteni          #+#    #+#             */
/*   Updated: 2017/07/16 19:50:38 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int line, char grid[9][9], char num_to_check);
int		ft_check_col(int col, char grid[9][9], char num_to_check);
int		ft_check_block(int line, int col, char grid[9][9], char num_to_check);

int		ft_check(int cursor_line, int cursor_col, char grid[9][9], char try)
{
	if (try > '9')
		try = '1';
	if (cursor_col > 9)
	{
		cursor_col = 0;
		cursor_line ++;
	}
	if (cursor_line <= 8 && cursor_col <= 8)
	{
		if (grid[cursor_line][cursor_col] != '.')
			cursor_line++;
		if (ft_check_line(cursor_line, grid, try) == 0 && 
				ft_check_col(cursor_col, grid, try) == 0 &&
				ft_check_block(cursor_line, cursor_col, grid, try) == 0 &&
				grid[cursor_line][cursor_col] == '.' &&
				ft_check(cursor_line, cursor_col + 1, grid, try))
		{
			grid[cursor_line][cursor_col] = try;
			ft_check(cursor_line, cursor_col + 1, grid, try);
			return (1);
		}
		else
			ft_check(cursor_line, cursor_col, grid, try + 1);
	}
	return (0);
}

void 	ft_resolve(char grid[9][9])
{
	char try;
	int cursor_col;
	int cursor_line;
	int c;

	try = '1';
	cursor_col = 0;
	cursor_line = 0;
	c = 0;
	if	(ft_check(cursor_line, cursor_col, grid, try))
		grid[cursor_line][cursor_col] = try;
}
