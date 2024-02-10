#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define MAX_QUERY_LEN 100
#define MIN_TABLE_SIZE 3
#define DEFAULT_TABLE_SIZE 1873
#define QUERY_SUCCESS_FORMAT "found sale id=%s, purchased_item=%s, cost=%.5f\n"
#define QUERY_FAILURE_FORMAT "could not find sale with id=%s\n"
#define USAGE_STRING "%s [-s threshold] [-t table_size] <filename>\n"

int main(int argc, char **argv) {
	int s_flag;
	size_t table_size;
	// TODO: parse opts with getopt and initialize these variables
	// (see strtoul for parsing unsigned long)
	// handle any bad inputs (missing filename or invalid option flag
	// by printing out the USAGE_STRING to stderr and exiting with failure:
	// fprintf(stderr, USAGE_STRING, argv[0]); // you can use this line

	// TODO: initialze htable
	// using calloc so all buckets are initialized to NULL
	Node **htable = calloc(/* TODO: fill in */);
	if (htable == NULL) {
		return EXIT_FAILURE;
	}

	// TODO: get filename and call load_table;

	char *filename = /* TODO: fill in */;

	if (/* TODO: call load_table and check if it succeeded */) {
		fprintf(stderr, "error in load_table\n");
		delete_table(htable, table_size);
		return EXIT_FAILURE;
	}

	char query[MAX_QUERY_LEN + 1];
	char *end;
	// read one line at a time from stdin, do a lookup for that id
	//
	while (fgets(query, MAX_QUERY_LEN + 1, stdin) == query) {
		// replace the \n, if it exists (for hashing)
		if ((end = strchr(query, '\n'))) *end = '\0'; // don't change this line

		// TODO: read a line from stdin and perform a lookup
		// if the sale is found, print its contents to stdout
		// using QUERY_SUCCESS_FORMAT
		//
		// if the sale is not found, print a message to **stdout**
		// using QUERY_FAILURE_FORMAT
		//
		// keep track of the number of successful queries
	}
	printf("%d successful queries\n", /* TODO: fill in */);

	// if -s called then print stats
	if (/* TODO: fill in */) {
		// TODO: output the stats
	}

	// TODO: free all allocated memory associated with the table
	// using delete_table()
	//

	return EXIT_SUCCESS;
}
