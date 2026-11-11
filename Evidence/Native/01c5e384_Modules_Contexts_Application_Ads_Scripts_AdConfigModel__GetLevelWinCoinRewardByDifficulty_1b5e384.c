/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.AdConfigModel$$GetLevelWinCoinRewardByDifficulty
int32_t Modules_Contexts_Application_Ads_Scripts_AdConfigModel__GetLevelWinCoinRewardByDifficulty (Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o* __this, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.AdConfigModel$$GetLevelWinCoinRewardByDifficulty
   int32_t Modules_Contexts_Application_Ads_Scripts_AdConfigModel__GetLevelWinCoinRewardByDifficulty
   (Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o* __this, int32_t levelDifficultyType,
   const MethodInfo* method); */

undefined4
Modules_Contexts_Application_Ads_Scripts_AdConfigModel__GetLevelWinCoinRewardByDifficulty_1b5e384
          (long param_1,int param_2)

{
  if (param_2 == 2) {
    return *(undefined4 *)(param_1 + 0x54);
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *(undefined4 *)(param_1 + 0x4c);
    }
    return 100;
  }
  return *(undefined4 *)(param_1 + 0x50);
}

