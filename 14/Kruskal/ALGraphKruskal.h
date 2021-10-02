#ifndef __AL_GRAPH_KRUSKAL__
#define __AL_GRAPH_KRUSKAL__

#include "DLinkedList.h"
#include "PriorityQueue.h"
#include "ALEdge.h"

enum { A, B, C, D, E, F, G, H, I, J };

typedef struct _ual {
	int numV;
	int numE;
	List* adjList;
	int* visitInfo;
	PQueue pqueue;    // 간선의 가중치 정보를 위한 우선순위 큐가 추가됨
} ALGraph;

void GraphInit(ALGraph* pg, int nv);

void GraphDestroy(ALGraph* pg);

void AddEdge(ALGraph* pg, int fromV, int toV, int weight);

void ShowGraphEdgeInfo(ALGraph* pg);

void DFShowGraphVertex(ALGraph* pg, int startV); // 깊이 우선 탐색 활용

void ConKruskalMST(ALGraph* pg);  // 크루스칼 최소 비용 신장 트리

void ShowGraphEdgeWeightInfo(ALGraph* pg); // 가중치 정보 출력

#endif __AL_GRAPH_KRUSKAL__