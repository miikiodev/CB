#include "CoffeeBean/Version.hpp"

namespace cb {
    auto version() -> std::string_view {
        return "0.1.0-dev";
    }
}