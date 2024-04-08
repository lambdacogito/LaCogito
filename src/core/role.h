#pragma once

#include <memory>

#include "core/concept.h"

namespace cotigo {
namespace core {

class Role;
using RolePtr = std::shared_ptr<Role>;

class Role : public Concept {
public:
  /* override */ inline bool IsRole() const { return true; }
};

} // namespace core
} // namespace cotigo
