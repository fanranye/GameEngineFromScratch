#include "SkyBoxPhase.hpp"

#include "GraphicsManager.hpp"
#include "IPipelineStateManager.hpp"

using namespace My;

void SkyBoxPhase::Draw(Frame& frame) {
    auto& pPipelineState = g_pPipelineStateManager->GetPipelineState("SkyBox");

    g_pGraphicsManager->SetPipelineState(pPipelineState, frame);

    g_pGraphicsManager->DrawSkyBox(frame);
}