#ifndef POLY_X_H
#define POLY_X_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "overlapanalysis.h"
#include "filterresult.h"
#include "options.h"

using namespace std;

class PolyX{
public:
    PolyX();
    ~PolyX();

    static void trimPolyG(Read* r1, Read* r2, FilterResult* fr, int compareReq, int readSwitch);
    static void trimPolyG(Read* r1, Read* r2, FilterResult* fr, float percReq, int readSwitch);
    static void trimPolyG(Read* r1, FilterResult* fr, int compareReq);
    static void trimPolyG(Read* r1, FilterResult* fr, float percReq);
    static void trimPolyX(Read* r1, Read* r2, FilterResult* fr, int compareReq);
    static void trimPolyX(Read* r1, FilterResult* fr, int compareReq);
    static bool test();
    static bool test_percentG();
    static bool test_polyG();


};


#endif
