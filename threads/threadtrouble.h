/* threadtrouble.h

    Lab 1: The Trouble with Concurrent Programming

    Each of the T test threads in your new ThreadTest will generate
    N items with arbitrary keys and insert each item into a shared TestList
    in sorted order of the key. T and N should be settable from the command
    ine (directions for doing this are available on the course web site).
    After inserting its N items, each thread should call a TestList remove
    primitive N times to remove N items from the front of the list. The "correct"
    or "expected" behavior is that each item inserted into the list is returned
    by the remove primitive exactly once, that every remove call returns a
    valid item, and that the list is empty when the last thread has finished.
    Since the list is sorted, each thread expects the items that it removes
    to come off in sorted order, eventhough they won't necessarily be the same
    items that thread put into the list (assuming T > 1) .
*/

#ifndef THREADTROUBLE_H
#define THREADTROUBLE_H

#include "thread.h"
#include "kernel.h"
#include "../lib/list.h"

void ThreadTroubleTest(char *threadTroubleT, char *threadTroubleN);
extern Kernel *kernel;

#endif
