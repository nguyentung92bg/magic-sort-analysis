/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ItemInfoButton$$InfoButtonOnSelectSuccessEvent
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__InfoButtonOnSelectSuccessEvent (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ItemInfoButton$$InfoButtonOnSelectSuccessEvent
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__InfoButtonOnSelectSuccessEvent
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__InfoButtonOnSelectSuccessEvent_3fa8124
               (long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c38ffa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9b30);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_05762600);
    bRam0000000005c38ffa = 1;
  }
  puVar4 = PTR_DAT_057f9b30;
  puVar3 = PTR_DAT_057f0e20;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  cVar1 = *(char *)(param_1 + 0x38);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar2 = PTR_DAT_05762600;
  if (lVar6 != 0) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopupArguments___ctor_3fa8220
              (lVar6,cVar1 != '\0');
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar2;
    FUN_012d0d74();
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) + 0x20)
                    + 8))(*(long *)(lVar5 + 0x10),lVar6);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

