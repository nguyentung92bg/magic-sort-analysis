/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$TryIntroduceNewBlocker
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__TryIntroduceNewBlocker (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$TryIntroduceNewBlocker
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__TryIntroduceNewBlocker
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__TryIntroduceNewBlocker_1f1d370
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((bRam0000000005c28661 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0581b970);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    bRam0000000005c28661 = 1;
  }
  iVar4 = Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetNewBlockerToIntroduce_1f1d5f0
                    (param_1);
  if (iVar4 == 0) {
    return;
  }
  if (**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) {
    lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18);
    if (lVar6 != 0) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
      uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                        (iVar4,0);
      puVar1 = PTR_DAT_057636d0;
      if (plVar7 != (long *)0x0) {
        lVar6 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
              goto LAB_0201d4a8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,0x14);
LAB_0201d4a8:
        uVar10 = (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          lVar6 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
                goto LAB_0201d50c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar1,0x15);
LAB_0201d50c:
          (*(code *)*puVar8)(plVar7,uVar5,puVar8[1]);
        }
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        lVar6 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                          (iVar4,0);
        puVar3 = PTR_DAT_0581b970;
        puVar2 = PTR_DAT_057f0e20;
        puVar1 = PTR_DAT_057b8520;
        if (lVar6 != 0) {
          Modules_Contexts_Application_Events_Scripts_EventSender__SendNewBlockerIntroducedStat_1468b3c
                    (lVar6,uVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar9 != 0) &&
             (Modules_Contexts_GamePlay_UI_NewBlockerIntro_Scripts_NewBlockerIntroPopUpArguments___ctor_16ec110
                        (lVar9,iVar4,0), lVar6 != 0)) {
            if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) +
                                    0x20) + 8))(*(long *)(lVar6 + 0x10),lVar9);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

