#ifndef __AL_GRAPH_BFS__
#define __AL_GRAPH_BFS__

#include "DLinkedList.h"

enum { A, B, C, D, E, F, G, H, I, J };

typedef struct _ual {
	int numV;  
	int numE;  
	List* adjList;   // 이중 연결 리스트를 간선 정보에 활용함
	int* visitInfo;
} ALGraph;


void GraphInit(ALGraph* pg, int nv);

void GraphDestroy(ALGraph* pg);

void AddEdge(ALGraph* pg, int fromV, int toV);

void ShowGraphEdgeInfo(ALGraph* pg);

void BFShowGraphVertex(ALGraph* pg, int startV);

#endif __AL_GRAPH_BFS__