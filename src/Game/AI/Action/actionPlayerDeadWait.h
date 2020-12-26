#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerDeadWait : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerDeadWait, PlayerAction)
public:
    explicit PlayerDeadWait(const InitArg& arg);
    ~PlayerDeadWait() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
