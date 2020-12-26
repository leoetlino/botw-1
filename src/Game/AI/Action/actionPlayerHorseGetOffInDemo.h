#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerHorseGetOffInDemo : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerHorseGetOffInDemo, PlayerAction)
public:
    explicit PlayerHorseGetOffInDemo(const InitArg& arg);
    ~PlayerHorseGetOffInDemo() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
