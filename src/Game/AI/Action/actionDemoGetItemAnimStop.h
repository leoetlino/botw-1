#pragma once

#include "Game/AI/Action/actionDemoGetItem.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class DemoGetItemAnimStop : public DemoGetItem {
    SEAD_RTTI_OVERRIDE(DemoGetItemAnimStop, DemoGetItem)
public:
    explicit DemoGetItemAnimStop(const InitArg& arg);
    ~DemoGetItemAnimStop() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    sead::SafeString mWaitASKeyName_s{};
};

}  // namespace uking::action
