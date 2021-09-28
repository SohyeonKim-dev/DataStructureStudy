#include <stdio.h>
#include "ALGraph.h"

int main() {
	ALGraph graph;
	GraphInit(&graph, 5); // 2��° parameter�� vertex �� ����

	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, C, D);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, A);

	ShowGraphEdgeInfo(&graph);

	GraphDestroy(&graph);

	return 0;
}

/*

[Output]

A�� ����� ����: B D E
B�� ����� ����: A C
C�� ����� ����: B D
D�� ����� ����: A C E
E�� ����� ����: A D


*/