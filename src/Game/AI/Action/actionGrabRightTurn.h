#pragma once

#include "Game/AI/Action/actionTurnBase.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class GrabRightTurn : public TurnBase {
    SEAD_RTTI_OVERRIDE(GrabRightTurn, TurnBase)
public:
    explicit GrabRightTurn(const InitArg& arg);
    ~GrabRightTurn() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const float* mRotSpd_s{};
    // static_param at offset 0x28
    const float* mFinRotate_s{};
    // static_param at offset 0x30
    const float* mPosReduceRatio_s{};
    // static_param at offset 0x38
    const float* mBaseRotRatio_s{};
    // static_param at offset 0x40
    const bool* mIsFollowGround_s{};
    // static_param at offset 0x48
    const float* mRotMinSpeedRatio_s{};
    // static_param at offset 0x50
    const bool* mIsChangeable_s{};
    // dynamic_param at offset 0x58
    sead::Vector3f* mTargetPos_d{};
};

}  // namespace uking::action
