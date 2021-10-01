#include <stdio.h>
#include "ALGraphBFS.h"

int main() {

	ALGraph graph;
	GraphInit(&graph, 7);

	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, D, C);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, F);
	AddEdge(&graph, E, G);

	ShowGraphEdgeInfo(&graph);
	printf("\n");

	BFShowGraphVertex(&graph, A); 
	printf("\n");
	BFShowGraphVertex(&graph, C); 
	printf("\n");
	BFShowGraphVertex(&graph, E); 
	printf("\n");
	BFShowGraphVertex(&graph, G); 
	printf("\n");

	GraphDestroy(&graph);

	return 0;
}

/*

[Output]

A�� ����� ����: B D
B�� ����� ����: A C
C�� ����� ����: B D
D�� ����� ����: A C E
E�� ����� ����: D F G
F�� ����� ����: E
G�� ����� ����: E

A B D C E F G
C B D A E F G
E D F G A C B
G E D F A C B


*/