#include "Game/AI/Action/actionPlayerAtnWait.h"

namespace uking::action {

PlayerAtnWait::PlayerAtnWait(const InitArg& arg) : PlayerAction(arg) {}

PlayerAtnWait::~PlayerAtnWait() = default;

bool PlayerAtnWait::init_(sead::Heap* heap) {
    return PlayerAction::init_(heap);
}

void PlayerAtnWait::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayerAction::enter_(params);
}

void PlayerAtnWait::leave_() {
    PlayerAction::leave_();
}

void PlayerAtnWait::loadParams_() {
    getStaticParam(&mAtnTurnDiffAng_s, "AtnTurnDiffAng");
}

void PlayerAtnWait::calc_() {
    PlayerAction::calc_();
}

}  // namespace uking::action
