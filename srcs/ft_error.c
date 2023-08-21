#include "parser.h"

int	ft_error(void)
{
	return (ft_putendl_fd("ERROR", 2));
}

void	ft_cmddel(void *lst)
{
	t_list	*cmd;

	cmd = (t_list *)lst;
	ft_lstclear(&cmd, ft_chkdel);
}

int	ft_pipe_check(const char *s, int *i)
{
	if (s[*i] == '|')
		*i += 1;
	return (0);
}