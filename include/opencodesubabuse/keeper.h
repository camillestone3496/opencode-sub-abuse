// keeper — part of opencode-sub-abuse.

#pragma once

#include <string>
#include <vector>

namespace opencodesubabuse {

class Keeper {
public:
    explicit Keeper(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace opencodesubabuse
