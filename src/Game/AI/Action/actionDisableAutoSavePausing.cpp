#include "Game/AI/Action/actionDisableAutoSavePausing.h"

namespace uking::action {

DisableAutoSavePausing::DisableAutoSavePausing(const InitArg& arg) : ksys::act::ai::Action(arg) {}

DisableAutoSavePausing::~DisableAutoSavePausing() = default;

bool DisableAutoSavePausing::init_(sead::Heap* heap) {
    return ksys::act::ai::Action::init_(heap);
}

void DisableAutoSavePausing::enter_(ksys::act::ai::InlineParamPack* params) {
    ksys::act::ai::Action::enter_(params);
}

void DisableAutoSavePausing::leave_() {
    ksys::act::ai::Action::leave_();
}

void DisableAutoSavePausing::loadParams_() {}

void DisableAutoSavePausing::calc_() {
    ksys::act::ai::Action::calc_();
}

}  // namespace uking::action
