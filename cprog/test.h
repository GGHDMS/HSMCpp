typedef struct _my
{
    int *pInt;
    int icount;
    int iMaxCount;
}tArr;

void InitArr(tArr* _pArr);

void PushBack(tArr* _pArr, int _iData);

void ReleaseArr(tArr* _pArr);

void ReAlloc(tArr* _pArr);