/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$ShouldShowRevealTutorial
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__ShouldShowRevealTutorial (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$ShouldShowRevealTutorial
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__ShouldShowRevealTutorial
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__ShouldShowRevealTutorial_1e938d4
               (void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2814b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_057f67a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c2814b = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057d9070);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
      plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057a1e60);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
        lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_057f67a8);
        lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        if ((lVar8 != 0) &&
           ((((lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0 &&
              (plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar8,*(undefined8 *)PTR_DAT_057e8f70),
              puVar1 = PTR_DAT_057636d0, lVar3 != 0)) && (*(long *)(lVar3 + 0x18) != 0)) &&
            (lVar3 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar3 != 0)))) {
          if (*(int *)(lVar3 + 0x3c) == 2) {
            if (plVar5 == (long *)0x0) goto LAB_01f93b88;
            lVar3 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x3c) * 0x10 + 0x138);
                  goto LAB_01f93a7c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x3c);
LAB_01f93a7c:
            uVar9 = (*(code *)*puVar7)(plVar5,puVar7[1]);
            if ((uVar9 & 1) == 0) {
              if (lVar4 == 0) goto LAB_01f93b88;
              uVar9 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__ShouldShowLevelTutorial_246d8c8
                                (lVar4,0);
              if ((uVar9 & 1) == 0) {
                if (plVar6 == (long *)0x0) goto LAB_01f93b88;
                lVar3 = *plVar6;
                uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
                      puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
                      goto LAB_01f93afc;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0581aae8,0xc);
LAB_01f93afc:
                uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                if ((uVar9 & 1) == 0) {
                  lVar3 = *plVar5;
                  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12a);
                  if (uVar9 != 0) {
                    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                        puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                        goto LAB_01f93b70;
                      }
                      uVar9 = uVar9 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,1);
LAB_01f93b70:
                  iVar2 = (*(code *)*puVar7)(plVar5,puVar7[1]);
                  return 9 < iVar2;
                }
              }
            }
          }
          return false;
        }
      }
    }
  }
LAB_01f93b88:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

