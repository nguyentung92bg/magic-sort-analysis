/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayPlayOnAnimation
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayPlayOnAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayPlayOnAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayPlayOnAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayPlayOnAnimation_160a258
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c24420 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057d7420);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c24420 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__OnAnyCloseButtonClicked_1608fc8
              (param_1);
    lVar3 = Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__OnPlayOnAnimations_160a35c
                      (param_1);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0578afb0;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057d7420,0);
      uVar5 = *(undefined8 *)puVar1;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
        *(long *)(lVar3 + 0x80) = lVar4;
        FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

