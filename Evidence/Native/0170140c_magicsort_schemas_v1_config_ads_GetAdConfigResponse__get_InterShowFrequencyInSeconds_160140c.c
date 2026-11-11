/* IL2CPP: magicsort.schemas.v1.config.ads.GetAdConfigResponse$$get_InterShowFrequencyInSeconds
int32_t magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_InterShowFrequencyInSeconds (magicsort_schemas_v1_config_ads_GetAdConfigResponse_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: magicsort.schemas.v1.config.ads.GetAdConfigResponse$$get_InterShowFrequencyInSeconds
   int32_t magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_InterShowFrequencyInSeconds
   (magicsort_schemas_v1_config_ads_GetAdConfigResponse_o __this, const MethodInfo* method); */

void magicsort_schemas_v1_config_ads_GetAdConfigResponse__get_InterShowFrequencyInSeconds_160140c
               (int *param_1)

{
  int iVar1;
  
  iVar1 = Google_FlatBuffers_Table____offset_3139a10(param_1,10,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 2) != 0) {
    Google_FlatBuffers_ByteBuffer__ReadLittleEndian_31351ac
              (*(long *)(param_1 + 2),*param_1 + iVar1,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

