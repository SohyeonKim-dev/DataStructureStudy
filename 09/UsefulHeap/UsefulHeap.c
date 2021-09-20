#include "UsefulHeap.h"

void HeapInit(Heap* ph, PriorityComp pc) {
	ph->numOfData = 0;
	ph->comp = pc;
}

int HIsEmpty(Heap* ph) {
	if (ph->numOfData == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int GetParentIDX(int idx)
{
	return idx / 2;
}

int GetLChildIDX(int idx)
{
	return idx * 2;
}

int GetRChildIDX(int idx)
{
	return GetLChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx)
{
	if (GetLChildIDX(idx) > ph->numOfData)
		return 0;

	else if (GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);

	else
	{
		if (ph->comp(ph->heapArr[GetLChildIDX(idx)],
			ph->heapArr[GetRChildIDX(idx)]) < 0)
			return GetRChildIDX(idx);
		else
			return GetLChildIDX(idx);
	}
	// 멤버 .pr을 사용X -> 직접 comp 함수를 지정하여 사용.
	// 우선순위에 대한 캡슐화하는 것과 관련 있을까?
}

void HInsert(Heap* ph, HData data) {
	int idx = ph->numOfData + 1;

	while (idx != 1){
		if (ph->comp(data, ph->heapArr[GetParentIDX(idx)]) > 0){
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
		{
			break;
		}
	}
	ph->heapArr[idx] = data;
	ph->numOfData += 1;

	//아.. 다른 노드들의 이동은 올릴때 직접 올리고
	// 맨 아래부터 추가되어 올라온 애는, 맨 마지막에만 직접 등록함
	// 왜냐하면 얘의 위치가 계속 변화하는데 그걸 계속 바꿔주지 않고
	// 결과적으로 한번만 처리해주면 되기 때문이지! 
}

HData HDelete(Heap* ph) {
	HData returnData = ph->heapArr[1]; // 우선 순위 가장 높은 루트 제거
	HData lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIDX(ph, parentIdx)) {
		if (ph->comp(lastElem, ph->heapArr[childIdx]) >= 0) {
			break;
		}
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}
	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData -= 1;
	return returnData;
}

