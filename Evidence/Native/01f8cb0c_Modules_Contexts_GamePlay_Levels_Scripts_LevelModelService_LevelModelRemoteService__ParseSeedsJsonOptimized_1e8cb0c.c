/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelRemoteService$$ParseSeedsJsonOptimized
System_Collections_Generic_List_string__o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJsonOptimized (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService_o* __this, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelRemoteService$$ParseSeedsJsonOptimized
   System_Collections_Generic_List_string__o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJsonOptimized
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService_o* __this,
   System_String_o* json, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelRemoteService__ParseSeedsJsonOptimized_1e8cb0c
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  puVar3 = PTR_DAT_05778c18;
  if ((bRam0000000005c2810e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801700);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_05778c18);
    FUN_012d0dc8(PTR_DAT_05779a08);
    bRam0000000005c2810e = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_05779a08;
  if (lVar6 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_05766950);
    plVar7 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((plVar7 != (long *)0x0) &&
       (System_Text_StringBuilder___ctor_1e51c94(plVar7,0), puVar3 = PTR_DAT_05801700, param_2 != 0)
       ) {
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar11 = 0;
        bVar2 = false;
        iVar5 = 0;
        do {
          uVar4 = System_String__get_Chars_1ecae64(param_2,iVar11,0);
          uVar1 = uVar4 & 0xffff;
          if (uVar1 < 0x7b) {
            if ((uVar1 != 10) && (uVar1 != 0x20)) goto LAB_01f8cc20;
          }
          else {
            if (uVar1 == 0x7d) {
              iVar5 = iVar5 + -1;
LAB_01f8cc20:
              if (bVar2) goto LAB_01f8cc24;
              bVar2 = false;
            }
            else {
              if (uVar1 != 0x7b) goto LAB_01f8cc20;
              iVar5 = iVar5 + 1;
LAB_01f8cc24:
              System_Text_StringBuilder__Append_1e4b238(plVar7,uVar4,0);
              bVar2 = true;
            }
            if (iVar5 == 0) {
              iVar5 = System_Text_StringBuilder__get_Length_1e4bb10(plVar7,0);
              if (0 < iVar5) {
                uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                lVar9 = *(long *)(lVar6 + 0x10);
                lVar10 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_01f8cd00;
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                  FUN_012d0d74();
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar6);
                }
                System_Text_StringBuilder__Clear_1e52e08(plVar7,0);
                bVar2 = false;
              }
              iVar5 = 0;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_2 + 0x10));
      }
      return lVar6;
    }
  }
LAB_01f8cd00:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

