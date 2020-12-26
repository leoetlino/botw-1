#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerSwimSpinAttack : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerSwimSpinAttack, PlayerAction)
public:
    explicit PlayerSwimSpinAttack(const InitArg& arg);
    ~PlayerSwimSpinAttack() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const float* mEnergyDash_s{};
};

}  // namespace uking::action
