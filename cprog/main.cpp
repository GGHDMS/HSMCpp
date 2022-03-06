#include <iostream>
#include "test.h"

using namespace std;

int main() {
    tArr s1 = {};
    
    InitArr(&s1);

    for(int i= 0; i <10 ; i++) {
        PushBack(&s1, i);
    }

    for(int i=0; i<10 ; i++) {
        cout<< s1.pInt[i] << endl;
    }
    ReleaseArr(&s1);
    return 0;
}