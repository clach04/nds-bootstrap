#ifndef CONFIGURATION_H
#define CONFIGURATION_H

//#include <limits.h> // ARG_MAX
#include <nds/ndstypes.h>

typedef struct configuration {
    bool debug;
    bool cacheFatTable;
	bool dsiWramAccess;
	int b4dsMode;
	char* ndsPath;
	char* appPath;
	char* savPath;
	char* prvPath;
	char* donorPath;
	char* donorTwl0Path;
	char* donorTwlPath;
	char* donorTwlOnly0Path;
	char* donorTwlOnlyPath;
	//char* cleanDonorPath;
	char* gbaPath;
	char* gbaSavPath;
	char* apPatchPath;
	u32 romSize;
	u32 saveSize;
	u32 gbaRomSize;
	u32 gbaSaveSize;
	u32 wideCheatSize;
	u32 apPatchSize;
	u32 cheatSize;
	u8 language;
	char* guiLanguage;
	u8 region; // SDK 5
	bool useRomRegion;
	bool sdNand; // SDK 5
	u8 dsiMode; // SDK 5
	u8 isDSiWare; // SDK 5
	u8 valueBits;
	u8 valueBits2;
	u8 valueBits3;
	u8 donorSdkVer;
	u8 patchMpuRegion;
	u32 patchMpuSize;
	int extendedMemory;
	u8 consoleModel;
	//int colorMode;
	u8 romRead_LED;
	u8 dmaRomRead_LED;
	bool asyncCardRead;
	int cardReadDMA;
	bool boostCpu;
	bool boostVram;
	bool soundFreq;
	bool forceSleepPatch;
	bool volumeFix;
	bool preciseVolumeControl;
	bool logging;
	bool initDisc;
	bool sdFound;
	bool gameOnFlashcard;
	bool saveOnFlashcard;
	bool macroMode;
	u16 hotkey;
	bool specialCard;
} configuration;

#endif // CONFIGURATION_H