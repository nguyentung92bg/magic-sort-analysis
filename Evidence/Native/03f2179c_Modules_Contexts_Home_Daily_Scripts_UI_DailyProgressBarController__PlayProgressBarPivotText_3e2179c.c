/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$PlayProgressBarPivotText
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarPivotText (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$PlayProgressBarPivotText
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarPivotText
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay,
   const MethodInfo* method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarPivotText_3e2179c
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_0576bb68;
  if ((bRam0000000005c38111 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bb68);
    FUN_012d0dc8(PTR_DAT_057f6da0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fa6c0);
    FUN_012d0dc8(PTR_DAT_057c7518);
    FUN_012d0dc8(PTR_DAT_05784580);
    bRam0000000005c38111 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057f6da0;
  if (lVar3 != 0) {
    DG_Tweening_Core_DOGetter_int____ctor_156cd70(lVar3,param_1,*(undefined8 *)PTR_DAT_057fa6c0,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      DG_Tweening_Core_DOSetter_int____ctor_156deb0(lVar4,param_1,*(undefined8 *)PTR_DAT_057c7518,0)
      ;
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20);
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = DG_Tweening_DOTween__To_1ed85d4(uVar6,lVar3,lVar4,param_2,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
          if ((bRam0000000005c2b025 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_05784580);
            FUN_012d0dc8(PTR_DAT_05776a80);
            FUN_012d0dc8(PTR_DAT_0580b108);
            bRam0000000005c2b025 = 1;
          }
          puVar1 = PTR_DAT_05776a80;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            *(undefined4 *)(lVar3 + 0xb4) = 0x25;
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0580b108;
            if (lVar4 != 0) {
              DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar5,0);
              lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar2 != 0) {
                DG_Tweening_EaseFunction___ctor_1ed6eb4
                          (lVar2,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
                *(long *)(lVar3 + 0xb8) = lVar2;
                FUN_012d0d74((long *)(lVar3 + 0xb8),lVar2);
                return lVar3;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

