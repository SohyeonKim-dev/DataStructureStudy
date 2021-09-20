#include "SimpleHeap.h"

void HeapInit(Heap* ph) {
	ph->numOfData = 0;
}

int HIsEmpty(Heap* ph) {
	if (ph->numOfData == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int GetParentIDX(int idx) {
	return idx / 2;
}

int GetLChildIDX(int idx) {
	return idx * 2;
}

int GetRChildIDX(int idx) {
	return GetLChildIDX(idx) + 1;
}

int GetHighPriorityChildIDX(Heap* ph, int idx) {
	if (GetLChildIDX > ph->numOfData) {
		return 0;
	}
	else if (GetLChildIDX == ph->numOfData) {
		return GetLChildIDX(idx);
	}
	else {
		if (ph->heapArr[GetLChildIDX(idx)].pr >
			ph->heapArr[GetRChildIDX(idx)].pr) {
			return GetRChildIDX(idx);
		}
		else {
			return GetLChildIDX(idx);
		}
	}
}


void HInsert(Heap* ph, HData data, Priority pr) { // 여기에 있는 우선순위 요소 때문에 코드 품질 하락
	int idx = ph->numOfData + 1;
	HeapElem nelem = { pr, data };

	while (idx != 1) {
		if (pr < (ph->heapArr[GetParentIDX(idx)].pr)) {
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else {
			break;
		}
	}
	ph->heapArr[idx] = nelem;
	ph->numOfData += 1;
}

HData HDelete(Heap* ph) {
	HData returnData = (ph->heapArr[1]).data;
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHighPriorityChildIDX(ph, parentIdx)) {
		if (lastElem.pr <= ph->heapArr[childIdx].pr) {
			break;
		}

		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}
	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData -= 1;
	return returnData;
}
