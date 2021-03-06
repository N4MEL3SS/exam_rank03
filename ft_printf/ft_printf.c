#include <stdarg.h>
#include <unistd.h>

#define DEC "0123456789"
#define HEX "0123456789abcdef"

void	ft_putnbr(unsigned dig, unsigned len, char *sign, int *g_var)
{
	if (dig >= len)
		ft_putnbr(dig / len, len, sign, g_var);
	*g_var += (int)write (1, &sign[dig % len], 1);
}

void	ft_dig(long dig, int len, char *sign, int *g_var)
{
	if (dig < 0)
		*g_var += (int)write(1, "-", 1), dig *= -1;
	ft_putnbr(dig, len, sign, g_var);
}

ssize_t	ft_putstr(char *str, int len)
{
	while (str && str[len] && ++len);
	if (!str)
		return (write(1, "(null)", 6));
	return (write(1, str, len));
}

int	ft_printf(const char *fmt, ...)
{
	int		g_var = 0;
	va_list	ap;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%' && ++fmt)
		{
			if (*fmt == 's' && ++fmt)
				g_var += (int)ft_putstr(va_arg(ap, char *), 0);
			else if (*fmt == 'x' && ++fmt)
				ft_putnbr(va_arg(ap, int), 16, HEX, &g_var);
			else if (*fmt == 'd' && ++fmt)
				ft_dig(va_arg(ap, int), 10, DEC, &g_var);
		}
		else
			g_var += (int)write(1, fmt++, 1);
	}
	return (va_end(ap), g_var);
}
