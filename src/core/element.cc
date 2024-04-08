#include "core/element.h"

namespace cotigo {
namespace core {

HashVal Element::Hash() const {
  if (Element::INVALID_HASH != mHashedVal) return mHashedVal;
  mHashedVal = ComputeHash();
  return mHashedVal;
}
}  // namespace core
}  // namespace cotigo