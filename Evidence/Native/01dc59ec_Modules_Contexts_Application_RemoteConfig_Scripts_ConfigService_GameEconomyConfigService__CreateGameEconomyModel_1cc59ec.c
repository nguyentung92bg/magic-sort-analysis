/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$CreateGameEconomyModel
Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CreateGameEconomyModel (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyResponseModel_o* responseModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$CreateGameEconomyModel
   Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o*
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CreateGameEconomyModel
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this,
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyResponseModel_o*
   responseModel, const MethodInfo* method); */

long Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__CreateGameEconomyModel_1cc59ec
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2779e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8268);
    FUN_012d0dc8(PTR_DAT_0580d9d8);
    FUN_012d0dc8(PTR_DAT_05760a80);
    FUN_012d0dc8(PTR_DAT_0576b4b0);
    FUN_012d0dc8(PTR_DAT_057a7860);
    FUN_012d0dc8(PTR_DAT_057f1f68);
    FUN_012d0dc8(PTR_DAT_058193d8);
    FUN_012d0dc8(PTR_DAT_057b4d78);
    FUN_012d0dc8(PTR_DAT_057d5dc8);
    bRam0000000005c2779e = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (param_2 == 0) goto LAB_01dc5c64;
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057b4d78);
    if (lVar6 == 0) goto LAB_01dc5c64;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_058193d8);
    puVar5 = PTR_DAT_0580d9d8;
    puVar4 = PTR_DAT_057d8268;
    puVar3 = PTR_DAT_057d5dc8;
    puVar2 = PTR_DAT_057a7860;
    if (*(long *)(param_2 + 0x68) == 0) goto LAB_01dc5c64;
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_2 + 0x68),*(undefined8 *)PTR_DAT_057f1f68);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar5), lVar10 = lStack_60,
          (uVar7 & 1) != 0) {
      if (lStack_60 != 0) {
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Object___ctor_23dfe5c(lVar8,0);
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          FUN_012d0d74(plVar9,lVar8);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar6,lVar8);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar4);
  }
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576b4b0);
  if (lVar10 != 0) {
    System_Object___ctor_23dfe5c(lVar10,0);
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar10 + 0x10) = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(lVar10 + 0x20) = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar10 + 0x30) = uVar12;
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar10 + 0x40) = uVar12;
    *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(param_2 + 0x58);
    *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(param_2 + 0x60);
    *(undefined1 *)(lVar10 + 0x68) = *(undefined1 *)(param_2 + 100);
    *(long *)(lVar10 + 0x60) = lVar6;
    FUN_012d0d74((long *)(lVar10 + 0x60),lVar6);
    *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(param_2 + 0x10);
    return lVar10;
  }
LAB_01dc5c64:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

