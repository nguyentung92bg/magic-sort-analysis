/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Show
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Show (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t inputMode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Show
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Show
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, int32_t
   inputMode, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Show_1e96f48
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2815b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05815b28);
    FUN_012d0dc8(PTR_DAT_0579d6e0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057894a0);
    bRam0000000005c2815b = 1;
  }
  puVar3 = PTR_DAT_0579d6e0;
  Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__SetText_1e971a4
            (param_1,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar5,param_2,*(undefined8 *)PTR_DAT_057894a0);
    plVar9 = (long *)(param_1 + 0x50);
    if (*plVar9 != 0) {
      DG_Tweening_TweenExtensions__Complete_1edd04c(*plVar9,0);
      if (*plVar9 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar9,0,0);
      }
    }
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),1,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
        plVar6 = *(long **)(param_1 + 0x48);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x2a8))(0,0,0,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          puVar2 = PTR_DAT_0578b048;
          if (*(long *)(param_1 + 0x18) != 0) {
            UnityEngine_SpriteRenderer__set_color_4095de0(0,0,0,0,*(long *)(param_1 + 0x18),0);
            uVar1 = _UNK_04339be4;
            uVar7 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                              (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               _UNK_04339be4,*(undefined8 *)(param_1 + 0x18),0);
            *(undefined8 *)(param_1 + 0x50) = uVar7;
            FUN_012d0d74(plVar9,uVar7);
            uVar7 = DG_Tweening_DOTweenModuleUI__DOColor_33e37b4
                              (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),uVar1
                               ,*(undefined8 *)(param_1 + 0x48),0);
            *(undefined8 *)(param_1 + 0x58) = uVar7;
            FUN_012d0d74((long *)(param_1 + 0x58),uVar7);
            lVar10 = *(long *)(param_1 + 0x60);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar3 = PTR_DAT_05815b28;
            if (lVar5 != 0) {
              System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05815b28,0);
              if (lVar10 != 0) {
                Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                          (lVar10,lVar5,0);
                lVar10 = *(long *)(param_1 + 0x68);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if ((lVar5 != 0) &&
                   (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)puVar3,0), lVar10 != 0
                   )) {
                  if ((bRam0000000005c3941f & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_0578b048,lVar5,0);
                    bRam0000000005c3941f = 1;
                  }
                  puVar2 = PTR_DAT_0578b048;
                  plVar9 = (long *)(lVar10 + 0x38);
                  lVar10 = *plVar9;
                  while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar10,lVar5,0),
                         plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar2))) {
                    lVar8 = FUN_01351224(plVar9,plVar6,lVar10);
                    bVar4 = lVar10 == lVar8;
                    lVar10 = lVar8;
                    if (bVar4) {
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d1288(plVar6);
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

