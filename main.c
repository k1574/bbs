#include <sys/stat.h>
#include <stdio.h>

int
main(void)
{
	struct stat stats;
	if(!stat("/", &stats))
		printf("%u", stats.st_blksize);
	return 0;
}
