#include "node.h"
#include <limits.h>
#include <stdio.h>

#define TABLESIZE_MSG "Table size: %zu\n"
#define TOTAL_ENTRIES_MSG "Total entries: %lu\n"
#define LONGEST_MSG "Longest chain: %lu\n"
#define SHORTEST_MSG "Shortest chain: %lu\n"
#define THRESHOLD_MSG "Reached threshold: %lu\n"
#define EMPTY_MSG "Empty buckets: %lu\n"

void print_info(Node **htable, size_t table_size, unsigned long threshold) {
	// TODO: walk down the indices of the htable
	// iterate through each chain and update statistics
	// print out statistics at end
	//
	// NOTE: all your statistics variables should be of type
	// unsigned long
	//
	// NOTE: you may use ULONG_MAX if you want
	// (maximum value for unsigned long int)
}
