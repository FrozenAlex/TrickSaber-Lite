#include "util.hpp"

#include "logger.hpp"
#include "main.hpp"
#include "metacore/shared/game.hpp"

namespace TrickUtils {
    void Utils::DisableScoreSubmission() {
        MetaCore::Game::SetScoreSubmission(MOD_ID, false);  // 💫
    }

    void Utils::EnableScoreSubmission() {
        MetaCore::Game::SetScoreSubmission(MOD_ID, true);
    }
}  // namespace TrickUtils
