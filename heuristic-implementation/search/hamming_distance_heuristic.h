#ifndef HAMMING_DISTANCE_HEURISTIC_H
#define HAMMING_DISTANCE_HEURISTIC_H

#include "heuristic.h"

class HammingDistanceHeuristic : public Heuristic {
protected:
    virtual void initialize();
    virtual int compute_heuristic(const GlobalState &state);
public:
    HammingDistanceHeuristic(const Options &options);
    ~HammingDistanceHeuristic();
};

#endif
