/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$CloseButtonOnSelectSuccessEvent
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__CloseButtonOnSelectSuccessEvent (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$CloseButtonOnSelectSuccessEvent
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__CloseButtonOnSelectSuccessEvent
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__CloseButtonOnSelectSuccessEvent_3fb18b0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_0580ffe8;
  if ((bRam0000000005c3905c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057d1980);
    FUN_012d0dc8(PTR_DAT_0580ffe8);
    bRam0000000005c3905c = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(long *)(lVar2 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar2 + 0x10),param_1);
    puVar6 = (undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(lVar2 + 0x18) = *puVar6;
    FUN_012d0d74();
    *puVar6 = 0;
    FUN_012d0d74(puVar6,0);
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_1 + 0x38) != 0) {
      Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinDynamicRewardView__Dispose_32fc3d8
                (*(long *)(param_1 + 0x38),0);
      lVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__HideAnimation_3fb1570
                        (*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                         *(undefined4 *)(param_1 + 0x70),param_1);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0579e470;
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar2,*(undefined8 *)PTR_DAT_057d1980,0);
        uVar5 = *(undefined8 *)puVar1;
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(long *)(lVar3 + 0x80) = lVar4;
          FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

