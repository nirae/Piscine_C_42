/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 11:50:36 by mfonteni          #+#    #+#             */
/*   Updated: 2017/07/15 17:36:46 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_line(int line, char grid[9][9], char num_to_check)
{
	int count;

	count = 0;
	while (grid[line][count] != num_to_check && count <= 8)
		count++;
	if (grid[line][count] == num_to_check)
		return (1);
	else
		return (0);
}

int	ft_check_col(int col, char grid[9][9], char num_to_check)
{
	int count_line;

	count_line = 0;
	while (grid[count_line][col] != num_to_check && count_line <= 8)
		count_line++;
	if (grid[count_line][col] == num_to_check)
		return (1);
	else
		return (0);
}

int	ft_check_block(int line, int col, char grid[9][9],
		char num_to_check)
{
	int count_line;
	int count_col;

	count_line = 0;
	count_col = 0;
	while (grid[line + count_line][col + count_col] != num_to_check
			&& count_line <= 2)
	{
		while (grid[line + count_line][col + count_col] != num_to_check
				&& count_col <= 2)
			count_col++;
		if (grid[line + count_line][col + count_col] == num_to_check)
			return (1);
		count_line++;
		count_col = 0;
	}
	if (grid[line + count_line][col] == num_to_check)
		return (1);
	else
		return (0);
}
