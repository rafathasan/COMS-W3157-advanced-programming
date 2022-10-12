#include <stdio.h>
#include "rank.h"
 int main(void)
 {
 int rank = 2; // last year’s ranking
 printf("this year's ranking: #%d\n", adjust_rank(rank));
 return 0;
 }
