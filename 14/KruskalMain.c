#include <stdio.h>
#include "ALGraphKruskal.h"

int main(void)
{
	ALGraph graph;
	GraphInit(&graph, 6);   

	AddEdge(&graph, A, B, 9);
	AddEdge(&graph, B, C, 2);
	AddEdge(&graph, A, C, 12);
	AddEdge(&graph, A, D, 8);
	AddEdge(&graph, D, C, 6);
	AddEdge(&graph, A, F, 11);
	AddEdge(&graph, F, D, 4);
	AddEdge(&graph, D, E, 3);
	AddEdge(&graph, E, C, 7);
	AddEdge(&graph, F, E, 13);

	ConKruskalMST(&graph);
	printf("\n");

	ShowGraphEdgeInfo(&graph);
	printf("\n");

	ShowGraphEdgeWeightInfo(&graph);

	GraphDestroy(&graph);

	return 0;
}

/*

[Output]

F A B C D A B A B C D E A D C A E D A
A와 연결된 정점: D
B와 연결된 정점: C
C와 연결된 정점: B D
D와 연결된 정점: A C E F
E와 연결된 정점: D
F와 연결된 정점: D

(A-D), w:8
(D-C), w:6
(F-D), w:4
(D-E), w:3
(B-C), w:2


*/