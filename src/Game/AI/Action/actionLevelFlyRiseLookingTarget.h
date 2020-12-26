#pragma once

#include "Game/AI/Action/actionLevelFlyLook.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class LevelFlyRiseLookingTarget : public LevelFlyLook {
    SEAD_RTTI_OVERRIDE(LevelFlyRiseLookingTarget, LevelFlyLook)
public:
    explicit LevelFlyRiseLookingTarget(const InitArg& arg);
    ~LevelFlyRiseLookingTarget() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
