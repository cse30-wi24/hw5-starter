#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 100
#define FILE_OPEN_ERR_MSG "error in load_table while opening file %s\n"
#define DUPLICATE_ID_MSG "load_table duplicate entry: %s\n"
#define INSERTION_ERROR_MSG "load_table could not create node for %s\n"

bool load_table(Node **htable, size_t table_size, const char *filename) {
	FILE *fp = NULL;
	// TODO: open the file and check that it was successful

	// TODO: loop through the file and read one line at a time using fgets
	// see manual page for fgets for information on parameters
	char buf[MAX_LINE_LEN + 1]; // input buffer for fgets
	while (fgets(buf, MAX_LINE_LEN + 1, fp) == buf) {
		// TODO: for each line, use strtok to break it into columns
		// (convert the third column to a double)

		// TODO: get the corresponding chain for this entry

		// TODO: check that the node doesn't already exist in table

		// TODO: add non-duplicate node to the front of its chain
	}
	return 0;
}
