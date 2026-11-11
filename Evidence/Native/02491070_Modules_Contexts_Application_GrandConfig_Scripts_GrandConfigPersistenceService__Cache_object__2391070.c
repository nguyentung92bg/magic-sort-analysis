/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$Cache<object>
void Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__Cache_object_ (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, Il2CppObject* model, System_String_o* fileName, const MethodInfo_2391070* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$Cache<object>
   void 
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__Cache_object_
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this,
   Il2CppObject* model, System_String_o* fileName, const MethodInfo_2391070* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__Cache_object__2391070
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
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
  
  puVar5 = PTR_DAT_058031d8;
  if ((bRam0000000005c2aac8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c9238);
    bRam0000000005c2aac8 = 1;
  }
  puVar1 = PTR_DAT_057c9238;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
  puVar5 = PTR_DAT_05808bd0;
  uVar10 = *(undefined8 *)puVar1;
  if ((bRam0000000005c37334 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,uVar10,param_3,0);
    bRam0000000005c37334 = 1;
  }
  uVar6 = UnityEngine_Application__get_persistentDataPath_383a9c8(0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar5);
  }
  lVar7 = System_IO_Path__Combine_357a894(uVar6,uVar10,param_3,0);
  Modules_Infrastructure_Persistence_PersistentData__CreateDirectoryIfNotExists_3d1e600();
  uVar6 = UnityEngine_Application__get_temporaryCachePath_383a9f0(0);
  lVar8 = System_IO_Path__Combine_357a894(uVar6,uVar10,param_3,0);
  Modules_Infrastructure_Persistence_PersistentData__CreateDirectoryIfNotExists_3d1e600();
  System_IO_File__WriteAllText_34851e4(lVar8,uVar3,0);
  System_IO_File__Delete_34847a4(lVar7,0);
  if ((bRam0000000005c327a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808bd0,lVar7,0);
    bRam0000000005c327a5 = 1;
  }
  if (lVar8 == 0) {
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    puVar5 = PTR_DAT_057a7268;
  }
  else {
    if (lVar7 != 0) {
      if (*(int *)(lVar8 + 0x10) == 0) {
        thunk_FUN_0136d790(PTR_DAT_057a2cc8);
        uVar3 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar10 = thunk_FUN_0136d790(PTR_DAT_0580ff00);
        puVar5 = PTR_DAT_057a7268;
      }
      else {
        if (*(int *)(lVar7 + 0x10) != 0) {
          if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar8 = System_IO_Path__GetFullPath_3574658(lVar8,0);
          uVar3 = System_IO_Path__GetFullPath_3574658(lVar7,0);
          if (cRam0000000005c25914 == '\0') {
            FUN_012d0dc8(PTR_DAT_057bd9e0);
            cRam0000000005c25914 = '\x01';
          }
          if (lVar8 == 0) {
            uVar10 = 0;
            uVar9 = 0;
          }
          else {
            uVar10 = System_String__GetRawStringData_1ecdd9c(lVar8,0);
            uVar9 = *(undefined4 *)(lVar8 + 0x10);
          }
          uVar4 = System_IO_FileSystem__FileExists_3482ae0(uVar10,uVar9);
          puVar5 = PTR_DAT_058084a0;
          if ((uVar4 & 1) == 0) {
            uVar3 = thunk_FUN_0136d790(PTR_DAT_0575a3b8);
            uVar3 = SR__Format_23f736c(uVar3,lVar8,0);
            thunk_FUN_0136d790(PTR_DAT_058068b8);
            uVar10 = thunk_FUN_01320e48();
            FUN_0103b554();
            System_IO_FileNotFoundException___ctor_29a62dc(uVar10,uVar3,lVar8,0);
            uVar3 = thunk_FUN_0136d790(PTR_DAT_0577fdf0);
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar10,uVar3);
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
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar2 = Interop_Sys__LStat_23f7af0(lVar8,&uStack_a0,0);
          if (iVar2 == 0) {
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            iVar2 = Interop_Sys__LStat_23f7af0(uVar3,&uStack_110,0);
            if ((iVar2 != 0) || ((lStack_48 == lStack_b8 && (lStack_40 == lStack_b0)))) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              iVar2 = Interop_Sys__Rename_23f7cd0(lVar8,uVar3,0);
              if (iVar2 == 0) {
                return;
              }
            }
          }
          System_IO_FileSystem__LinkOrCopyFile_348a020(lVar8,uVar3);
          System_IO_FileSystem__DeleteFile_3484850(lVar8);
          return;
        }
        thunk_FUN_0136d790(PTR_DAT_057a2cc8);
        uVar3 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar10 = thunk_FUN_0136d790(PTR_DAT_0580ff00);
        puVar5 = PTR_DAT_057c46e0;
      }
      uVar6 = thunk_FUN_0136d790(puVar5);
      System_ArgumentException___ctor_211d60c(uVar3,uVar10,uVar6,0);
      goto LAB_03587214;
    }
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    puVar5 = PTR_DAT_057c46e0;
  }
  uVar10 = thunk_FUN_0136d790(puVar5);
  uVar6 = thunk_FUN_0136d790(PTR_DAT_05768930);
  System_ArgumentNullException___ctor_212572c(uVar3,uVar10,uVar6,0);
LAB_03587214:
  uVar10 = thunk_FUN_0136d790(PTR_DAT_0577fdf0);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar3,uVar10);
}

