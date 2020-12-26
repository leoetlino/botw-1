#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerGrabUpAnmStop : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerGrabUpAnmStop, PlayerAction)
public:
    explicit PlayerGrabUpAnmStop(const InitArg& arg);
    ~PlayerGrabUpAnmStop() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
