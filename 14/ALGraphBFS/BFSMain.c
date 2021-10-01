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

A와 연결된 정점: B D
B와 연결된 정점: A C
C와 연결된 정점: B D
D와 연결된 정점: A C E
E와 연결된 정점: D F G
F와 연결된 정점: E
G와 연결된 정점: E

A B D C E F G
C B D A E F G
E D F G A C B
G E D F A C B


*/