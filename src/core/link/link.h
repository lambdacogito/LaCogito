#pragma once

#include "base/relation.h"

namespace cotigo {

class Link;
using LinkPtr = std::shared_ptr<Link>;

class Link : public Relation {};

} // namespace cotigo
