/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.ALevel$$GetDefaultPlayOnBehaviour
System_Collections_Generic_List_PlayOnBehaviourType__o* Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour (Modules_Contexts_GamePlay_Levels_Scripts_ALevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.ALevel$$GetDefaultPlayOnBehaviour
   System_Collections_Generic_List_PlayOnBehaviourType__o*
   Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour
   (Modules_Contexts_GamePlay_Levels_Scripts_ALevel_o* __this, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour_1f170a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__BottleWithCustomHeightCanSolveStuck_1610c58
                      (*(long *)(param_1 + 0x10),1,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      bVar3 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__BottleWithCustomHeightCanSolveStuck_1610c58
                        (*(long *)(param_1 + 0x10),2,0);
      puVar1 = PTR_DAT_0576aae0;
      lVar10 = *(long *)(param_1 + 0x38);
      if (lVar10 != 0) {
        if ((bRam0000000005c29b3a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057d9070,uVar4 & 1,bVar3 & 1,0);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          FUN_012d0dc8(PTR_DAT_05802298);
          FUN_012d0dc8(PTR_DAT_057dfb08);
          FUN_012d0dc8(PTR_DAT_057b6db8);
          bRam0000000005c29b3a = 1;
        }
        puVar2 = PTR_DAT_057b6db8;
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
          lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar6,*(undefined8 *)PTR_DAT_057d9070);
          iVar5 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnManager__GetCurrentPlayOnType_2148504
                            (lVar10);
          if ((iVar5 == 1) && ((uVar4 & 1) != 0)) {
            uVar9 = 1;
          }
          else {
            uVar9 = 5;
            if ((iVar5 == 2 & bVar3 & 1) == 0) {
              uVar9 = 0;
            }
          }
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar1 = PTR_DAT_05802298;
          if (lVar7 != 0) {
            System_Collections_Generic_List_Int32Enum____ctor_20512f0
                      (lVar7,*(undefined8 *)PTR_DAT_057dfb08);
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar1;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 != 0) {
              uVar4 = *(uint *)(lVar7 + 0x18);
              if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar7,uVar9);
              }
              uVar8 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnManager__IsMultipleBottlePlayOn_2148384
                                (lVar10);
              if ((uVar8 & 1) != 0) {
                if (((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) ||
                   (lVar10 = *(long *)(*(long *)(lVar6 + 0x18) + 0x1f0), lVar10 == 0))
                goto LAB_022487e0;
                iVar5 = *(int *)(lVar10 + 0x18) + -1;
                if (0 < iVar5) {
                  do {
                    lVar10 = *(long *)(lVar7 + 0x10);
                    lVar6 = *(long *)puVar1;
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                    if (lVar10 == 0) goto LAB_022487e0;
                    uVar4 = *(uint *)(lVar7 + 0x18);
                    if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                      *(undefined4 *)(lVar10 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
                    }
                    else {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                                (lVar7,uVar9);
                    }
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
              }
              return lVar7;
            }
          }
        }
LAB_022487e0:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

