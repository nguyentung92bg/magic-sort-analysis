/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$Dispose
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__Dispose (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$Dispose
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__Dispose
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__Dispose_3fb361c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3906a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d128);
    FUN_012d0dc8(PTR_DAT_057981a0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057e0ac0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057df148);
    bRam0000000005c3906a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__ResetCell_3fb33d4
              (param_1,*(undefined8 *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_012d0d74((undefined8 *)(param_1 + 0x70),0);
  }
  puVar2 = PTR_DAT_057e0ac0;
  puVar1 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x68) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x68),0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar4 == 0) {
      return;
    }
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576d128);
    puVar1 = PTR_DAT_057df148;
    if (lVar5 != 0) {
      System_Action_int__int__int____ctor_1c4e288(lVar5,param_1,*(undefined8 *)PTR_DAT_057981a0,0);
                    /* WARNING: Could not recover jumptable at 0x0343ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x10) + 8))
                (lVar4,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

