#include "include/shaiya/include/CCharacter.h"
using namespace shaiya;

void CCharacter::ClearEffects(CCharacter* user)
{
    typedef void(__thiscall* LPFN)(CCharacter*);
    (*(LPFN)0x416970)(user);
}

void CCharacter::RemoveEffect(CCharacter* user, uint effectDataId, uint effectSubId)
{
    typedef void(__thiscall* LPFN)(CCharacter*, uint, uint);
    (*(LPFN)0x419370)(user, effectDataId, effectSubId);
}

void CCharacter::RenderEffect(CCharacter* user, uint effectDataId, uint effectSubId, float delay, D3DVECTOR* pos, D3DVECTOR* dir, D3DVECTOR* up, int unknown/*0:9*/)
{
    typedef void(__thiscall* LPFN)(CCharacter*, uint, uint, float, D3DVECTOR*, D3DVECTOR*, D3DVECTOR*, int);
    (*(LPFN)0x41A2C0)(user, effectDataId, effectSubId, delay, pos, dir, up, unknown);
}
