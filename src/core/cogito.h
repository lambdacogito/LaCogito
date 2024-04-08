#pragma once

#include "core/category.h"
#include "core/category_manager.h"
#include "core/concept.h"
#include "core/concept_repr.h"
#include "core/context.h"
#include "core/element.h"

#ifdef _WIN32
#define COGITOKB_CORE_EXPORT __declspec(dllexport)
#else
#define COGITOKB_CORE_EXPORT
#endif

namespace cotigo {

class Cogito {

  Cogito() = default;
  ~Cogito() = default;
};
} // namespace cotigo
