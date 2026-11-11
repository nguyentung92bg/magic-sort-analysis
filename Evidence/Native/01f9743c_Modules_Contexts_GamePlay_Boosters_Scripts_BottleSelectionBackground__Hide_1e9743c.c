/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Hide
void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Hide (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BottleSelectionBackground$$Hide
   void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Hide
   (Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__Hide_1e9743c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam0000000005c2815f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05815b28);
    FUN_012d0dc8(PTR_DAT_05814648);
    FUN_012d0dc8(PTR_DAT_057cf748);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057eeb58);
    bRam0000000005c2815f = 1;
  }
  puVar1 = PTR_DAT_057b8520;
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
  }
  puVar2 = PTR_DAT_057cf748;
  Modules_Contexts_GamePlay_Boosters_Scripts_BottleSelectionBackground__HideText_1e97368(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    uVar5 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                      (0,0,0,0,_UNK_04339be4,*(undefined8 *)(param_1 + 0x18),0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_057eeb58;
    puVar1 = PTR_DAT_0578b048;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05814648,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                        (uVar5,lVar4,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      FUN_012d0d74((long *)(param_1 + 0x50),uVar5);
      lVar8 = *(long *)(param_1 + 0x60);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05815b28;
      if (lVar4 != 0) {
        System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_05815b28,0);
        if (lVar8 != 0) {
          Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                    (lVar8,lVar4,0);
          lVar8 = *(long *)(param_1 + 0x68);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar4 != 0) &&
             (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)puVar2,0), lVar8 != 0)) {
            if ((bRam0000000005c39420 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0578b048,lVar4,0);
              bRam0000000005c39420 = 1;
            }
            puVar1 = PTR_DAT_0578b048;
            plVar9 = (long *)(lVar8 + 0x38);
            lVar8 = *plVar9;
            while ((plVar6 = (long *)System_Delegate__Remove_23e3b70(lVar8,lVar4,0),
                   plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar1))) {
              lVar7 = FUN_01351224(plVar9,plVar6,lVar8);
              bVar3 = lVar8 == lVar7;
              lVar8 = lVar7;
              if (bVar3) {
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

