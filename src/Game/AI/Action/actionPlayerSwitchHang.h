#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerSwitchHang : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerSwitchHang, PlayerAction)
public:
    explicit PlayerSwitchHang(const InitArg& arg);
    ~PlayerSwitchHang() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
