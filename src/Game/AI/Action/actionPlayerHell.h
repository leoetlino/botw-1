#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerHell : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerHell, PlayerAction)
public:
    explicit PlayerHell(const InitArg& arg);
    ~PlayerHell() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    bool* mIsNoDamage_d{};
};

}  // namespace uking::action
