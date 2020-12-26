#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerEventStartWait : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerEventStartWait, PlayerAction)
public:
    explicit PlayerEventStartWait(const InitArg& arg);
    ~PlayerEventStartWait() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
