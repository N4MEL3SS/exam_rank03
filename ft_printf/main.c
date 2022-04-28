#include <stdio.h>
#include <stdlib.h>

#ifndef FLAG
# define PRINT	ret += ft_printf
#else
# define PRINT	ret += printf
#endif

int	ft_printf(char const *format, ...);

int	main(void)
{
	int	ret;

	ret = 0;
	PRINT("\n");
	PRINT("%d\n", -0);
	PRINT("%d\n", 0);
	PRINT("%d\n", +0);
	PRINT("%d\n", -1);
	PRINT("%d\n", 1);
	PRINT("%d\n", +1);
	PRINT("%d\n", -42);
	PRINT("%d\n", 42);
	PRINT("%d\n", +42);
	PRINT("%d\n", 5454);
	PRINT("%d\n", INT32_MAX);
	PRINT("%d\n", INT32_MAX + 1);
	PRINT("%d\n", INT32_MIN);
	PRINT("%d\n", INT32_MIN - 1);
	PRINT("\n\n");
	PRINT("\n");
	PRINT("%x\n", -0);
	PRINT("%x\n", 0);
	PRINT("%x\n", +0);
	PRINT("%x\n", -1);
	PRINT("%x\n", 1);
	PRINT("%x\n", +1);
	PRINT("%x\n", -42);
	PRINT("%x\n", 42);
	PRINT("%x\n", +42);
	PRINT("%x\n", 5454);
	PRINT("%x\n", INT32_MAX);
	PRINT("%x\n", INT32_MAX + 1);
	PRINT("%x\n", INT32_MIN);
	PRINT("%x\n", INT32_MIN - 1);
	PRINT("%x\n", UINT32_MAX);
	PRINT("%x\n", UINT32_MAX + 1);
	PRINT("\n\n");
	PRINT("%s\n", "");
	PRINT("%s\n", "toto");
	PRINT("%s\n", "wiurwuyrhwrywuier");
	PRINT("%s\n", NULL);
	PRINT("\n\n");
	PRINT("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	PRINT("%d%x%d%x%d%x%d%x\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	PRINT("-%d-%x-%d-%x-%d-%x-%d-%x-\n", 0, 0, 42, 42, 2147483647, 2147483647, (int)-2147483648, (int)-2147483648);
	PRINT("%s%s%s%s\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	PRINT("-%s-%s-%s-%s-\n", "", "toto", "wiurwuyrhwrywuier", NULL);
	printf("written: %d\n", ret);
}
