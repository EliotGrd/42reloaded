/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:33:55 by egiraud           #+#    #+#             */
/*   Updated: 2025/04/27 17:40:46 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c, int fdout)
{
	write(fdout, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int fdout, int len)
{
	int	i;

	if (len == 0)
		len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		ft_putchar(str[i], fdout);
		i++;
	}
}

void	reading(char *file)
{
	int		fd;
	int		n;
	char	buf[1024];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n", 2, 0);
		return ;
	}
	n = read(fd, buf, 1024);
	while (n > 0)
	{
		ft_putstr(buf, 1, n);
		n = read(fd, buf, 1024);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		reading(argv[1]);
	return (0);
}
