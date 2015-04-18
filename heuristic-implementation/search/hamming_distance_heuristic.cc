#include "hamming_distance_heuristic.h"

#include "global_state.h"
#include "globals.h"
#include "option_parser.h"
#include "plugin.h"


HammingDistanceHeuristic::HammingDistanceHeuristic(const Options &opts)
    : Heuristic(opts) {
}

HammingDistanceHeuristic::~HammingDistanceHeuristic() {
}

void HammingDistanceHeuristic::initialize() {
    cout << "Initializing Hamming distance heuristic..." << endl;
}

int HammingDistanceHeuristic::compute_heuristic(const GlobalState &state) {
    // TODO implement heuristic computation
    return 0;
}

static Heuristic *_parse(OptionParser &parser) {
    // TODO call parser and create heuristic
}

// TODO use plugin mechanism to extend command line parser for heuristic
