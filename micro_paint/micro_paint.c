#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_zone
{
	int		width;
	int		height;
	char	back;
}			t_zone;

int	main(int argc, char **argv)
{
	FILE	*file;
	t_zone	zone;

	zone.height = 0;
	zone.width = 0;
	file = fopen(argv[1], "r");
	fscanf(file, "%d %d %c", &zone.width, &zone.height, &zone.back);
	return (0);
}
