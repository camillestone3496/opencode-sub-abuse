// main.cpp — entry point. Wires config and subsystems together.

#include "opencodesubabuse/settings.h"
#include "opencodesubabuse/accounts.h"
#include "opencodesubabuse/trials.h"
#include "opencodesubabuse/keeper.h"
#include "opencodesubabuse/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    opencodesubabuse::Settings settings = opencodesubabuse::Settings::load_default();
    opencodesubabuse::Accounts accounts(settings.store_path);
    opencodesubabuse::Trials trials(settings.store_path);
    opencodesubabuse::Keeper keeper(settings.store_path);
    opencodesubabuse::Cli cli(settings.store_path);
    std::fprintf(stderr, "[opencode-sub-abuse] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
