#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class EventBgmStopAction : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(EventBgmStopAction, ksys::act::ai::Action)
public:
    explicit EventBgmStopAction(const InitArg& arg);
    ~EventBgmStopAction() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // dynamic_param at offset 0x20
    float* mFadeSec_d{};
    // dynamic_param at offset 0x28
    sead::SafeString* mBgmName_d{};
};

}  // namespace uking::action
