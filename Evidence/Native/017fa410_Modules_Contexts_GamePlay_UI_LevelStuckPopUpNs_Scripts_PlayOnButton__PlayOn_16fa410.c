/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$PlayOn
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__PlayOn (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnButton$$PlayOn
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__PlayOn
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__PlayOn_16fa410
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24ba2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0577fe90);
    bRam0000000005c24ba2 = 1;
  }
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
     (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057e8f70), puVar2 = PTR_DAT_0581aae8,
     plVar3 != (long *)0x0)) {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_017fa50c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0581aae8,10);
LAB_017fa50c:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
      if ((uVar9 & 1) == 0) {
        return;
      }
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_017fa58c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)puVar2,10);
LAB_017fa58c:
      lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar7 != 0) {
        uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour_1f170a8
                          (lVar7,0);
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        puVar2 = PTR_DAT_0577fe90;
        lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
        if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
          plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar7,*(undefined8 *)PTR_DAT_05791da0);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar7 != 0) {
            Modules_Contexts_GamePlay_Loop_Scripts_Regular_PlayOnArguments___ctor_1f0c9f8(lVar7,0);
            *(undefined8 *)(lVar7 + 0x18) = uVar6;
            FUN_012d0d74((undefined8 *)(lVar7 + 0x18),uVar6);
            if (plVar3 != (long *)0x0) {
              lVar8 = *plVar3;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575bba8) {
                    puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                    goto LAB_017fa67c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575bba8,5);
LAB_017fa67c:
                    /* WARNING: Could not recover jumptable at 0x017fa694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar3,lVar7,puVar4[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

