#include "core/relation_boundable.h"

#include "core/relation.h"

namespace cotigo {
namespace core {

bool SimpleRelationBoundable::BindRelation(const RelationPtr& relation) {
  std::string sname = relation->SemName();
  if (mBoundRelations.find(sname) != mBoundRelations.end()) {
    return false;
  }
  mBoundRelations[sname] = relation;
  return true;
}

bool SimpleRelationBoundable::UnbindRelation(const std::string& sname) {
  if (mBoundRelations.find(sname) != mBoundRelations.end()) {
    mBoundRelations.erase(sname);
    return true;
  }
  return false;
}
}  // namespace core
}  // namespace cotigo