#include "Game/AI/Action/actionPlayerSquatWait.h"

namespace uking::action {

PlayerSquatWait::PlayerSquatWait(const InitArg& arg) : PlayerAction(arg) {}

PlayerSquatWait::~PlayerSquatWait() = default;

bool PlayerSquatWait::init_(sead::Heap* heap) {
    return PlayerAction::init_(heap);
}

void PlayerSquatWait::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayerAction::enter_(params);
}

void PlayerSquatWait::leave_() {
    PlayerAction::leave_();
}

void PlayerSquatWait::loadParams_() {
    getStaticParam(&mWaitTime_s, "WaitTime");
    getStaticParam(&mAtnTurnDiffAng_s, "AtnTurnDiffAng");
}

void PlayerSquatWait::calc_() {
    PlayerAction::calc_();
}

}  // namespace uking::action
