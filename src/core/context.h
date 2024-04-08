#pragma once

#include "core/concept.h"

namespace cotigo {
namespace core {
class Context;
using ContextPtr = std::shared_ptr<Context>;

class Context : public Concept {
public:
  /* override */ inline bool IsContext() const { return true; }

private:
  std::map<std::string, ConceptPtr> mConcepts;
};

} // namespace core
} // namespace cotigo
