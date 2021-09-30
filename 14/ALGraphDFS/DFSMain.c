#include <stdio.h>
#include "ALGraphDFS.h"

int main() {
	ALGraph graph;
	GraphInit(&graph, 7); // vertex 7개로 지정 

	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, D, C);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, F);
	AddEdge(&graph, E, G);

	ShowGraphEdgeInfo(&graph);
	printf("\n");

	DFShowGraphVertex(&graph, A); 
	printf("\n");
	DFShowGraphVertex(&graph, C); 
	printf("\n");
	DFShowGraphVertex(&graph, E); 
	printf("\n");
	DFShowGraphVertex(&graph, G); 
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

A B C D E F G
C B A D E F G
E D A B C F G
G E D A B C F

*/