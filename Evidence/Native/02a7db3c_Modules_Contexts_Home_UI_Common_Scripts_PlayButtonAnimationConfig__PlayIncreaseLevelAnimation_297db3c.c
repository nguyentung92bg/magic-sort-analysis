/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.PlayButtonAnimationConfig$$PlayIncreaseLevelAnimation
void Modules_Contexts_Home_UI_Common_Scripts_PlayButtonAnimationConfig__PlayIncreaseLevelAnimation (Modules_Contexts_Home_UI_Common_Scripts_PlayButtonAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Common.Scripts.PlayButtonAnimationConfig$$PlayIncreaseLevelAnimation
   void 
   Modules_Contexts_Home_UI_Common_Scripts_PlayButtonAnimationConfig__PlayIncreaseLevelAnimation
   (Modules_Contexts_Home_UI_Common_Scripts_PlayButtonAnimationConfig_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_PlayButtonAnimationConfig__PlayIncreaseLevelAnimation_297db3c
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2d743 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fbec0);
    FUN_012d0dc8(PTR_DAT_05808828);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057e17f8);
    bRam0000000005c2d743 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057fbec0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) &&
         (plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar6,*(undefined8 *)PTR_DAT_05808828), plVar7 != (long *)0x0)
         ) {
        lVar6 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_02a7dc98;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_02a7dc98:
        iVar3 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        puVar2 = PTR_DAT_057e17f8;
        puVar1 = PTR_DAT_057de4f8;
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
          iVar3 = **(int **)(*(long *)PTR_DAT_057e17f8 + 0xb8) + iVar3;
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057de4f8) {
                puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_02a7dd18;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057de4f8,4);
LAB_02a7dd18:
          uVar4 = (*(code *)*puVar9)(plVar8,iVar3,puVar9[1]);
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x40) != 0)) {
            lVar6 = *(long *)(*(long *)(lVar5 + 0x40) + 0x18);
            if (lVar6 != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__Prepare_297acfc
                        (lVar6,iVar3,uVar4);
              lVar6 = *plVar8;
              uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar6 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                    goto LAB_02a7dd9c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,4);
LAB_02a7dd9c:
              uVar4 = (*(code *)*puVar9)(plVar8,iVar3 + 1,puVar9[1]);
              if (*(long *)(lVar5 + 0x40) != 0) {
                lVar5 = *(long *)(*(long *)(lVar5 + 0x40) + 0x18);
                if (lVar5 != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__PlayLevelTextChangeAnimations_297af98
                            (lVar5,iVar3 + 1,uVar4,1);
                  **(int **)(*(long *)puVar2 + 0xb8) = **(int **)(*(long *)puVar2 + 0xb8) + 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

