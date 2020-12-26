#pragma once

#include "Game/AI/Action/actionCameraEvent.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class CameraEventTalkManualCtrlBase : public CameraEvent {
    SEAD_RTTI_OVERRIDE(CameraEventTalkManualCtrlBase, CameraEvent)
public:
    explicit CameraEventTalkManualCtrlBase(const InitArg& arg);
    ~CameraEventTalkManualCtrlBase() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x40
    const bool* mBowFlag_s{};
};

}  // namespace uking::action
