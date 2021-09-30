#include <stdio.h>
#include "ALGraph.h"

int main() {
	ALGraph graph;
	GraphInit(&graph, 5); // 2번째 parameter로 vertex 수 전달

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

A와 연결된 정점: B D E
B와 연결된 정점: A C
C와 연결된 정점: B D
D와 연결된 정점: A C E
E와 연결된 정점: A D


*/