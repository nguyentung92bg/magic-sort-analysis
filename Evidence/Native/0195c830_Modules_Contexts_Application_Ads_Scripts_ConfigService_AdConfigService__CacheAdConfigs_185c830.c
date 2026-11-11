/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$CacheAdConfigs
void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__CacheAdConfigs (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o* adConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$CacheAdConfigs
   void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__CacheAdConfigs
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o* adConfigModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__CacheAdConfigs_185c830
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c25788 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d3b58);
    FUN_012d0dc8(PTR_DAT_058002c8);
    bRam0000000005c25788 = 1;
  }
  uVar4 = UnityEngine_Application__get_version_383aa68(0);
  puVar1 = PTR_DAT_058002c8;
  puVar7 = PTR_DAT_057d3b58;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  FUN_012d0d74();
  puVar2 = PTR_DAT_058031d8;
  uVar4 = *(undefined8 *)puVar1;
  if ((bRam0000000005c2d55c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8,param_2,uVar4,*(undefined8 *)puVar7);
    FUN_012d0dc8(PTR_DAT_057c9238);
    bRam0000000005c2d55c = 1;
  }
  puVar7 = PTR_DAT_057c9238;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
  puVar1 = PTR_DAT_05808bd0;
  uVar12 = *(undefined8 *)puVar7;
  if ((bRam0000000005c37334 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,uVar12,uVar4,0);
    bRam0000000005c37334 = 1;
  }
  uVar8 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  lVar9 = System_IO_Path__Combine_357a894(uVar8,uVar12,uVar4,0);
  Modules_Infrastructure_Persistence_PersistentData__CreateDirectoryIfNotExists_3d1e600();
  uVar8 = UnityEngine_Application__get_temporaryCachePath_383a9f0(0);
  lVar10 = System_IO_Path__Combine_357a894(uVar8,uVar12,uVar4,0);
  Modules_Infrastructure_Persistence_PersistentData__CreateDirectoryIfNotExists_3d1e600();
  System_IO_File__WriteAllText_34851e4(lVar10,uVar5,0);
  System_IO_File__Delete_34847a4(lVar9,0);
  if ((bRam0000000005c327a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,lVar9,0);
    bRam0000000005c327a5 = 1;
  }
  if (lVar10 == 0) {
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar4 = thunk_FUN_01320e48();
    FUN_0103b554();
    puVar7 = PTR_DAT_057a7268;
  }
  else {
    if (lVar9 != 0) {
      if (*(int *)(lVar10 + 0x10) == 0) {
        thunk_FUN_0136d790(PTR_DAT_057a2cc8);
        uVar4 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar5 = thunk_FUN_0136d790(PTR_DAT_0580ff00);
        puVar7 = PTR_DAT_057a7268;
      }
      else {
        if (*(int *)(lVar9 + 0x10) != 0) {
          if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar10 = System_IO_Path__GetFullPath_3574658(lVar10,0);
          uVar4 = System_IO_Path__GetFullPath_3574658(lVar9,0);
          if (cRam0000000005c25914 == '\0') {
            FUN_012d0dc8(PTR_DAT_057bd9e0);
            cRam0000000005c25914 = '\x01';
          }
          if (lVar10 == 0) {
            uVar5 = 0;
            uVar11 = 0;
          }
          else {
            uVar5 = System_String__GetRawStringData_1ecdd9c(lVar10,0);
            uVar11 = *(undefined4 *)(lVar10 + 0x10);
          }
          uVar6 = System_IO_FileSystem__FileExists_3482ae0(uVar5,uVar11);
          puVar7 = PTR_DAT_058084a0;
          if ((uVar6 & 1) == 0) {
            uVar4 = thunk_FUN_0136d790(PTR_DAT_0575a3b8);
            uVar4 = SR__Format_23f736c(uVar4,lVar10,0);
            thunk_FUN_0136d790(PTR_DAT_058068b8);
            uVar5 = thunk_FUN_01320e48();
            FUN_0103b554();
            System_IO_FileNotFoundException___ctor_29a62dc(uVar5,uVar4,lVar10,0);
            uVar4 = thunk_FUN_0136d790(PTR_DAT_0577fdf0);
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar5,uVar4);
          }
          if ((bRam0000000005c327c1 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_058084a0);
            bRam0000000005c327c1 = 1;
          }
          lStack_48 = 0;
          uStack_50 = 0;
          uStack_38 = 0;
          lStack_40 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          lStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar3 = Interop_Sys__LStat_23f7af0(lVar10,&uStack_a0,0);
          if (iVar3 == 0) {
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            iVar3 = Interop_Sys__LStat_23f7af0(uVar4,&uStack_110,0);
            if ((iVar3 != 0) || ((lStack_48 == lStack_b8 && (lStack_40 == lStack_b0)))) {
              if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              iVar3 = Interop_Sys__Rename_23f7cd0(lVar10,uVar4,0);
              if (iVar3 == 0) {
                return;
              }
            }
          }
          System_IO_FileSystem__LinkOrCopyFile_348a020(lVar10,uVar4);
          System_IO_FileSystem__DeleteFile_3484850(lVar10);
          return;
        }
        thunk_FUN_0136d790(PTR_DAT_057a2cc8);
        uVar4 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar5 = thunk_FUN_0136d790(PTR_DAT_0580ff00);
        puVar7 = PTR_DAT_057c46e0;
      }
      uVar12 = thunk_FUN_0136d790(puVar7);
      System_ArgumentException___ctor_211d60c(uVar4,uVar5,uVar12,0);
      goto LAB_03587214;
    }
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar4 = thunk_FUN_01320e48();
    FUN_0103b554();
    puVar7 = PTR_DAT_057c46e0;
  }
  uVar5 = thunk_FUN_0136d790(puVar7);
  uVar12 = thunk_FUN_0136d790(PTR_DAT_05768930);
  System_ArgumentNullException___ctor_212572c(uVar4,uVar5,uVar12,0);
LAB_03587214:
  uVar5 = thunk_FUN_0136d790(PTR_DAT_0577fdf0);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar4,uVar5);
}

