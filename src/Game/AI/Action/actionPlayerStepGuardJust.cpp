#include "Game/AI/Action/actionPlayerStepGuardJust.h"

namespace uking::action {

PlayerStepGuardJust::PlayerStepGuardJust(const InitArg& arg) : PlayerAction(arg) {}

PlayerStepGuardJust::~PlayerStepGuardJust() = default;

bool PlayerStepGuardJust::init_(sead::Heap* heap) {
    return PlayerAction::init_(heap);
}

void PlayerStepGuardJust::enter_(ksys::act::ai::InlineParamPack* params) {
    PlayerAction::enter_(params);
}

void PlayerStepGuardJust::leave_() {
    PlayerAction::leave_();
}

void PlayerStepGuardJust::loadParams_() {
    getStaticParam(&mJumpHeight_s, "JumpHeight");
}

void PlayerStepGuardJust::calc_() {
    PlayerAction::calc_();
}

}  // namespace uking::action
