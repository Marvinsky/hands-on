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
    //Hamming distance heuristic counts number of variables that do not have
    // required goal value
    //h^H({A -> a, B -> b, C -> c}) = 1
    //for task with goal {A -> a, B -> b'}
    
    int hamming_count = 0;
    
    for (size_t i = 0; i < g_goal.size(); ++i) {
        int value = g_goal[i].second;
	for (size_t j = 0; j < g_variable_domain.size(); ++j) {
		if (state[j] != value) {
			++hamming_count;
		}
	}
    }
    return hamming_count;
}

static Heuristic *_parse(OptionParser &parser) {
    // TODO call parser and create heuristic
	Heuristic::add_options_to_parser(parser);
	Options opts = parser.parse();
	return new HammingDistanceHeuristic(opts);
}

// TODO use plugin mechanism to extend command line parser for heuristic
static  Plugin<Heuristic> _plugin("hamming", _parse);
