/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__Complete_260df78
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((bRam0000000005c2b9f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057df678);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b9f5 = 1;
  }
  if ((char)param_1[8] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  if (param_1[9] != 0) {
    uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__IsVisible_260e090()
    ;
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)param_1[9];
      if (plVar7 == (long *)0x0) goto LAB_0270e08c;
      (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    }
    lVar8 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    puVar1 = PTR_DAT_057606c8;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x40) != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                (*(long *)(lVar8 + 0x40),param_1[0x12],0);
      lVar8 = param_1[0x11];
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar9 != 0) {
        uVar10 = *(undefined4 *)(&UNK_0438ec10 + (ulong)((char)lVar8 == '\0') * 4);
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,param_1,*(undefined8 *)PTR_DAT_057df678,0);
        puVar1 = PTR_DAT_057815e0;
        if ((bRam0000000005c28460 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0,1,0);
          FUN_012d0dc8(PTR_DAT_057d6890);
          FUN_012d0dc8(PTR_DAT_057ca968);
          FUN_012d0dc8(PTR_DAT_057f1100);
          bRam0000000005c28460 = 1;
        }
        puVar4 = PTR_DAT_057f1100;
        puVar3 = PTR_DAT_057d6890;
        puVar2 = PTR_DAT_057ca968;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Sequence_1eda154();
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar10);
        uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                          (uVar5,lVar9,*(undefined8 *)puVar3);
        lVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                          (uVar5,0,1,*(undefined8 *)puVar4);
        uVar5 = *(undefined8 *)puVar2;
        if (((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) &&
           (*(char *)(lVar8 + 0x100) == '\0')) {
          *(undefined1 *)(lVar8 + 0x9c) = 1;
          return;
        }
        return;
      }
    }
  }
LAB_0270e08c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

