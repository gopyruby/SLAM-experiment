#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stdout, "%s Version %d.%d\n",
				argv[0],
				SLAM_VERSION_MAJOR,
				SLAM_VERSION_MINOR);
		fprintf(stdout, "Usage: %s <to be finished>\n", argv[0]);
		return 1;
	} 
	return 0;
}
