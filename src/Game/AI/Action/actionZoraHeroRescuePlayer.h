#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class ZoraHeroRescuePlayer : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(ZoraHeroRescuePlayer, ksys::act::ai::Action)
public:
    explicit ZoraHeroRescuePlayer(const InitArg& arg);
    ~ZoraHeroRescuePlayer() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // aitree_variable at offset 0x20
    void* mZoraHeroShowMsgUnit_a{};
};

}  // namespace uking::action
