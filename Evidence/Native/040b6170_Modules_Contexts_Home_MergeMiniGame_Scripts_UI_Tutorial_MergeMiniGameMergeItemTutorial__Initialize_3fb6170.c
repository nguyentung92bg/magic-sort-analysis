/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$Initialize
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__Initialize (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$Initialize
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__Initialize
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__Initialize_3fb6170
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c39081 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577eb80);
    FUN_012d0dc8(PTR_DAT_05779358);
    FUN_012d0dc8(PTR_DAT_057dbf40);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a3b80);
    bRam0000000005c39081 = 1;
  }
  puVar2 = PTR_DAT_057dbf40;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577eb80);
    puVar1 = PTR_DAT_057a3b80;
    if (lVar4 != 0) {
      System_Action_object____ctor_1647468(lVar4,param_1,*(undefined8 *)PTR_DAT_05779358,0);
                    /* WARNING: Could not recover jumptable at 0x0343d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 8) + 8))
                (lVar3,lVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

