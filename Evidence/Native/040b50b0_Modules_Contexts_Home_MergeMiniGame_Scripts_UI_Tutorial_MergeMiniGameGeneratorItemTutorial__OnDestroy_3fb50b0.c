/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$OnDestroy
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnDestroy (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$OnDestroy
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnDestroy
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnDestroy_3fb50b0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c3907a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d128);
    FUN_012d0dc8(PTR_DAT_05815900);
    FUN_012d0dc8(PTR_DAT_057dad70);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057df148);
    bRam0000000005c3907a = 1;
  }
  puVar2 = PTR_DAT_057dad70;
  puVar1 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x68) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x68),0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 == 0) {
      return;
    }
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576d128);
    puVar1 = PTR_DAT_057df148;
    if (lVar4 != 0) {
      System_Action_int__int__int____ctor_1c4e288(lVar4,param_1,*(undefined8 *)PTR_DAT_05815900,0);
                    /* WARNING: Could not recover jumptable at 0x0343ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x10) + 8))
                (lVar3,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

