#include "test.h"
#include <malloc.h>

void InitArr(tArr* _pArr){
    _pArr -> pInt = (int*)malloc(sizeof(int) * 2);
    _pArr -> icount = 0;
    _pArr -> iMaxCount = 2;
}

void ReleaseArr(tArr* _pArr){
    free(_pArr->pInt);
    _pArr->iMaxCount = 0;
    _pArr->icount=0;
}

void ReAlloc(tArr* _pArr){
    int * np = (int*)malloc(sizeof(int) * (_pArr-> icount)*2 );

    for(int i = 0; i < _pArr -> icount; i++){
        np[i] = _pArr-> pInt[i];
    }

    free(_pArr -> pInt);
    _pArr -> pInt =  np;
    _pArr -> iMaxCount *= 2;
}

void PushBack(tArr* _pArr, int _iData){
    if(_pArr -> icount <= _pArr -> icount){
        ReAlloc(_pArr);
    }
    
    _pArr->pInt[_pArr->icount++] = _iData;
}
