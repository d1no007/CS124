// libraries
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <assert.h>
#include "graph.h"

using namespace std;

int main(void) {
    Complete_Undirected C = Complete_Undirected(5, 2);
    C.generate_graph();
    C.print_graph();

    return 0;
}
