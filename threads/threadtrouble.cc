#include "threadtrouble.h"
#include <stdlib.h>
#include <iostream>

int comp(int x, int y)
{
    return x > y;
}

SortedList<int> testlist(comp);

void InsertSomething(int N){
        for(int i = 0; i < N; ++i){
                testlist.Insert(i);
        }

        kernel->currentThread->Yield();

        for(int i = 0; i < N; ++i){
                NULL == testlist.RemoveFront();
        }
}

void ThreadTroubleTest(char *threadTroubleT, char *threadTroubleN)
{
    int T = atoi(threadTroubleT);
    int N = atoi(threadTroubleN);
    char threadName[10] = "thread   "; //extra space for i

    for(int i = 0; i < T; ++i){
        threadName[7] = (char)(i+48);  //int i covert to char i of ASCII
        Thread *t = new Thread(threadName);
        std::cout << "fork thread " << i << std::endl;
        t->Fork((VoidFunctionPtr) InsertSomething, (void *)N);
        kernel->currentThread->Yield();
    }
}
