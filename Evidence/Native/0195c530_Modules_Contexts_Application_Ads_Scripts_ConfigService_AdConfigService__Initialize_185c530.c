/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$Initialize
void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__Initialize (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$Initialize
   void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__Initialize
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__Initialize_185c530
               (long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  if ((bRam0000000005c25786 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c25786 = 1;
  }
  uStack_18 = 0;
  uVar1 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__TryGetCachedAdConfig_185c608
                    (param_1,&uStack_18);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x18) = uStack_18;
    FUN_012d0d74();
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x2c) * 0x10 + 0x138);
        goto LAB_0195c5e0;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x2c);
LAB_0195c5e0:
  uVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
  if ((uVar1 & 1) != 0) {
    Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__SendGetRequest_185c6d8
              (param_1);
  }
  return;
}

