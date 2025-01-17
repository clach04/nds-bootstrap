#ifndef VALUEBITS_H
#define VALUEBITS_H

#include <nds/ndstypes.h>

extern u8 valueBits;
extern u8 valueBits2;
extern u8 valueBits3;

#define cacheFatTable (valueBits & BIT(0))
#define boostVram (valueBits & BIT(1))
#define forceSleepPatch (valueBits & BIT(2))
#define volumeFix (valueBits & BIT(3))
#define preciseVolumeControl (valueBits & BIT(4))
#define apPatchIsCheat (valueBits & BIT(5))
#define macroMode (valueBits & BIT(6))
#define logging (valueBits & BIT(7))
#define isDSiWare (valueBits2 & BIT(0))
#define asyncCardRead (valueBits2 & BIT(1))
#define cardReadDMA (valueBits2 & BIT(2))
#define specialCard (valueBits2 & BIT(4))
#define dsiWramAccess (valueBits2 & BIT(5))
#define hiyaCfwFound (valueBits2 & BIT(6))
#define useRomRegion (valueBits2 & BIT(7))
#define boostCpu (valueBits3 & BIT(0))
#define cardDmaImprove (valueBits3 & BIT(1))

#endif