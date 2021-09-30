#ifndef __AL_GRAPH_DFS__
#define __AL_GRAPH_DFS__

#include "DLinkedList.h"

enum { A, B, C, D, E, F, G, H, I, J };

typedef struct _ual
{
	int numV;  
	int numE;  
	List* adjList;   
	int* visitInfo;   // 그래프와 달리 추가된 방문 정보! 
} ALGraph;

void GraphInit(ALGraph* pg, int nv);

void GraphDestroy(ALGraph* pg);

void AddEdge(ALGraph* pg, int fromV, int toV);

void ShowGraphEdgeInfo(ALGraph* pg);

void DFShowGraphVertex(ALGraph* pg, int startV);

#endif __AL_GRAPH_DFS__
