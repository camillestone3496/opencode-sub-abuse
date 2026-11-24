// trials.cpp — part of opencode-sub-abuse.

#include "opencodesubabuse/trials.h"

#include <cstdio>

namespace opencodesubabuse {

Trials::Trials(const std::string& config_path)
    : config_path_(config_path) {}

void Trials::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Trials::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-sub-abuse] trials: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodesubabuse
