/* IL2CPP: magicsort.schemas.v1.config.ads.GetAdConfigResponse$$get_IsWatchAndWinEnabled
bool magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_IsWatchAndWinEnabled (magicsort_schemas_v1_config_ads_GetAdConfigResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.config.ads.GetAdConfigResponse$$get_IsWatchAndWinEnabled
   bool magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_IsWatchAndWinEnabled
   (magicsort_schemas_v1_config_ads_GetAdConfigResponse_o __this, const MethodInfo* method); */

ulong magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_IsWatchAndWinEnabled_16017b0
                (int *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = Google_FlatBuffers_Table____offset_3139a10(param_1,0x24,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* try { // try from 017017d4 to 018017e3 has its CatchHandler @ 01701a0c */
    cVar1 = Google_FlatBuffers_ByteBuffer__Get_313576c
                      (*(long *)(param_1 + 2),*param_1 + (int)uVar2,0);
    uVar2 = (ulong)(cVar1 != '\0');
  }
  return uVar2;
}

